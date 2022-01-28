const { render } = require("ejs")

module.exports.startChat = function(application, req, res){
    //ele popula a variavel dentro do req, em forma de json
    var dadosForm = req.body; 

    req.assert('apelido','Nome/apelido é obrigatório').notEmpty();
    req.assert('apelido','Nome precisar conter entre 3 a 15 caracteres').len(3, 15);
   
    //recuperar os erros que definimos como erros no 'assert'
    var erros = req.validationErrors();

    if(erros){
        //com o render, as informacoes sera passadas dentro da propria pagina 'index'
        res.render("index", {validacao : erros});
        //res.send('Existem erros no formularo');
        //o send finaliza o processamento. caso contrario, botar um return
        return;
    }
    
    application.get('io').emit(
        'msgPar',{
        apelido: dadosForm.apelido,
        mensagem: 'acabou de entrar no chat'
    }
    )


    res.render("chat",{dadosForm: dadosForm});
}