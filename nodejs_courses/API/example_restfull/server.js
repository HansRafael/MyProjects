var express = require('express');
var bodyParser = require('body-parser');
var mongodb = require('mongodb');
var objectId = require('mongodb').ObjectId;
//objectId usadao para transformar a string no ObjectID suportado pelo mongodb

var app = express();

//body-parser como mild
app.use(bodyParser.urlencoded({extended: true}));
app.use(bodyParser.json());

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
    var dados = req.body;
    
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
                    res.json(results)
                }
                mongoclient.close()
            });
        });
    });
});

//PUT by ID (update)
app.put('/api/:id',function (req, res){
    db.open(function(err, mongoclient){
        mongoclient.collection('postagens',function(err, collection){
            collection.update(
                { _id : objectId(req.params.id) },
                { $set : {titulo : req.body.titulo}, $set : {url_imagem : req.body.url_imagem}},
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
app.delete('/api/:id',function (req, res){
    db.open(function(err, mongoclient){
        mongoclient.collection('postagens',function(err, collection){
            collection.remove({ _id : objectId(req.params.id)}, function(err, results){
                if(err){
                    res.json(err);
                } else{
                    res.json(results)
                }
                mongoclient.close();
            });
        });
    });
});