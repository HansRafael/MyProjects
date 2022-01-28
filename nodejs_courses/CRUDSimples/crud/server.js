var express = require('express');
var bodyParser = require('body-parser');
var mongodb = require('mongodb');
var objectId = require('mongodb').ObjectId;


var app = express();

var port = 8080;
app.listen(port);

var db = new mongodb.Db(
    'instagram',
    new mongodb.Server('localhost', 27017, {}),
    {}
);

console.log('servidor HTTP está escudando na porta: ' + port);



app.use(bodyParser.urlencoded({extended: true}));

app.set('view engine','ejs');


app.get('/',(req, res) =>{
    res.render('index.ejs')
});

app.get('/', function(req, res){ 
    let cursos = db.collection('teste01').find();
});

app.get('/show', (req, res) => {
    db.collection('teste01').find().toArray((err, results) => {
        if (err) return console.log(err)
        res.render('show.ejs', { data: results })

    })
})

app.post('/show', (req,res) =>{
    db.collection('teste01').save(req.body, (err, result) =>{
        if(err) return console.log(err)

        console.log('Salvo no banco de dados');
        res.redirect('/');
        db.collection('teste').find().toArray((err, results) =>{
            console.log(results);
        });
    });
});

