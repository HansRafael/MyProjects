module.exports = function(application){
    application.get('/formulario_inclusao', function(req, res){ 
        application.app.controllers.admin.formulario_inclusao(application, req, res);
    });

    application.post('/noticias/salvar', function(req, res){ 
        application.app.controllers.admin.noticias_salvar(application, req, res);  
    });
};