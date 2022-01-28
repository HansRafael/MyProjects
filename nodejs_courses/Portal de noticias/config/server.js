var express = require('express'); 
var consign = require('consign');
var bodyParser = require('body-parser');
var expressValidator = require('express-validator');

var app = express(); 
app.set('view engine', 'ejs')  
app.set('views','./app/views') //mudar o local aonde pegara as views para renderizar

app.use(express.static('./app/public'));
app.use(bodyParser.urlencoded({extended: true}));
app.use(expressValidator());

consign()
    .include('app/routes')
    .then('config/dbConnection.js')
    .then('app/models')
    .then('app/controllers')
    .into(app);
//jogamos todos os metodos dentro da var 'app'
//precisa o dbConnection.js p/ saber q é um arquivo
//Como o server exporta, a pesquisa começa a partir do nível do 'app.js'
module.exports = app;