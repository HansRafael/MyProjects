//importar o modulo do fremework expres, consign,body,express-validator
var express = require('express');
var consign = require('consign');
var bodyParser = require('body-parser');
var expressValidator = require('express-validator');

//iniciar o objeto do expres
var app = express();

//config o ejs (setar as variaves 'view engine' e views do express)
app.set('view engine','ejs'); //qual engine sera utilizado
app.set('views','./app/views'); //onde poderao ser encontradas

//config os middleware express.static
app.use(express.static('./app/public'));

/*config o middleware body-parser
urlencoded serve para quando ouver um post de um formulario em alguma req nos conseguimos recuperar os
dados via json a partir da propriedade body*/
app.use(bodyParser.urlencoded({extended : true}));

app.use(expressValidator());

//efetua o autoload das rotas, models e dos controllers para o objeto app
consign()
    .include('app/routes')
    .then('app/models')
    .then('app/controllers')
    .into(app);

module.exports = app;

