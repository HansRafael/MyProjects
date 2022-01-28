module.exports = function(application){
	application.get('/', function(req, res){
		application.app.controllers.index.index(application, req, res);
	});

	application.get('/cadastro', function(req, res){
		//res.send('Pagina em construcao!')
		application.app.controllers.cadastro.cadastro(application, req, res);
	});

	application.get('/home', function(req, res){
		application.app.controllers.home.home(application, req, res);
	});


}