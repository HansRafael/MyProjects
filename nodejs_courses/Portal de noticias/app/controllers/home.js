module.exports.index = function(application,req,res){
    var connetcion = application.config.dbConnection();
    var noticiasModel = new application.app.models.NoticiasDAO(connetcion);
    
    noticiasModel.get5UltimasNoticias(function(error, result){
        res.render("home/index",{noticias : result});
    });
    
}