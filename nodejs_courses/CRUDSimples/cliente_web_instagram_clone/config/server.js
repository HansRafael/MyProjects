var express = require('express');
var consign = require('consign');
var bodyParser = require('body-parser');
var expressValidator = require('express-validator');


var app = express();


/* configurar o middleware body-parser */
app.use(bodyParser.urlencoded({extended: true}));
app.use(bodyParser.json());

/* configurar o middleware express-validator */
app.use(expressValidator());
consign()
	.include('app/routes')
	.then('app/models')
	.then('app/controllers')
	.into(app);

app.use(function(req, res, next){
	res.status(404).render('errors/404');
	next();
});

/* middleware que configura msgs de erro internos */
app.use(function(err, req, res, next){
	res.status(500).render('errors/500');
	next();
});

/* exportar o objeto app */
module.exports = app;