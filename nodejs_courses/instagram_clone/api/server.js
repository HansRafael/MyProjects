var express = require('express');
var bodyParser = require('body-parser');
var mongodb = require('mongodb');
var multiparty = require('connect-multiparty');
var objectId = require('mongodb').ObjectId;
var fs = require('fs');
//objectId usadao para transformar a string no ObjectID suportado pelo mongodb

var app = express();

//body-parser como mild
app.use(bodyParser.urlencoded({extended: true}));
app.use(bodyParser.json());
app.use(multiparty());

app.use(function(req, res, next){

    res.setHeader("Access-Control-Allow-Origin","*"); //habilita requisicoes de dominions diferentes
    res.setHeader("Access-Control-Allow-Methods","GET,PUT,POST,DELETE");  //pre-configurar os memtodos que essas origem pode necessitar
    res.setHeader("Access-Control-Allow-Headers","content-type"); //a propria requisicao vinda é capaz de reescrever as propriedades do header e do request
    res.setHeader("Access-Control-Allow-Credentials", true);


    next();
});

var port = 8080;
app.listen(port);

var db = new mongodb.Db(
    'instagram',
    new mongodb.Server('localhost', 27017, {}),
    {}
);

console.log('servidor HTTP está escudando na porta: ' + port);

app.get('/', function(req, res){
    
    res.send({msg: 'olá'});
});

//URI + verbo HTTP
app.post('/api',function (req, res){

        db.open(function(err, mongoclient){
            mongoclient.collection('postagens',function(err, collection){
                collection.insert(dados, function(err, records){
                    if(err){
                        res.json({'status':'erro'});
    
                    } else{
                        res.json({'status':'inclusao realizada'})
                    }
                    mongoclient.close();
                });
            });  
        });
});

//aqui vamos recuperar todos os documentos/informacoes para reutilzia-las
app.get('/api',function (req, res){   
    db.open(function(err, mongoclient){
        mongoclient.collection('postagens',function(err, collection){
            collection.find().toArray(function(err, results){
                if(err){
                    res.json(err);
                }else{
                    res.json(results)
                }
                mongoclient.close()
            });
        });
    });
});
// /: vai entender que é um parametro que sera passado
app.get('/api/:id',function (req, res){
    db.open(function(err, mongoclient){
        mongoclient.collection('postagens',function(err, collection){
            collection.find(objectId(req.params.id)).toArray(function(err, results){
                if(err){
                    res.json(err);
                }else{
                    res.status(200).json(results)
                }
                mongoclient.close()
            });
        });
    });
});

app.route('/edit/:id').get((req, res) =>{
    var id = req.params.id

    db.collection('crud').find(ObjectId(id)).toArray((err, result)=>{
        if(err) return res.send(err)
        res.json(results)
    })
})
.post((req, res)=>{
    var id = req.params.id
    var name = req.body.name
    var surname = req.body.surname

    db.collection('crud').updateOne({_id: objectId(id)},{
        $set: {
            name: name,
            surname: surname
        }
    }), (err, result) => {
        if(err) return res.send(err)
        res.redirect('/show')
    }
})





//PUT by ID (update)
app.put('/api/:id',function (req, res){
        
    db.open(function(err, mongoclient){
        mongoclient.collection('postagens',function(err, collection){
            collection.update(
                { _id : objectId(req.params.id) },
                { $push :   {
                                comentarios : {
                                    id_comentario : new mongodb.ObjectId(),          //identificador único,q será gerado por nos (mongo n faz)
                                    comentario : req.body.comentario
                                } //como n tem um esquema pre-definido, sera criado uma chave para comentario
                            }   
                    
                }, //push = incluiu um elemnto dentro de um array (nao atualiza o conteudo)
                {},
                function(err, records){
                    if(err){
                        res.json(err);
                    }else{
                        res.json(records);
                    }
                    mongoclient.close()
                }
            );
        });
    });
});

//delete
app.delete('/api/comentario/:id', function(req, res){
    db.open(function(err, mongoclient){
        mongoclient.collection('postagens', function(err, collection){
            collection.update(
                { },
                { $pull : {
                    comentarios : {
                        id_comentario : objectId(req.params.id)
                        }
                    }
                },
                { multi : true },
                function(err, records){
                    if(err){
                        res.json(err);
                    }else{
                        res.json(records);
                    }
                    mongoclient.close();
                }  
            );
        });
    });
});

app.delete('/api/public/:id', function(req, res){
    db.open(function(err, mongoclient){
        mongoclient.collection('postagens', function(err, collection){
            collection.remove(
                { _id : objectId(req.params.id)},
                function(err, records){
                    if(err){
                        res.json(err);
                    }else{
                        res.json(records);
                    }
                    mongoclient.close();
                }  
            );
        });
    });
});

