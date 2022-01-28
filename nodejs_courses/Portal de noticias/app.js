var app = require('./config/server')   

//var rotaNoticias = require('./app/routes/noticias')(app);
//var rotaHome = require('./app/routes/home')(app);
//var rotaFormularioInclusao = require('./app/routes/formulario_inclusao')(app);

//rotaFormularioInclusao(app); mas da para executar diretamente quando chamamos a funcao no require, basta enviar o parametro tambem

app.listen(3000, function(){ 
    console.log('Serv on');
});
