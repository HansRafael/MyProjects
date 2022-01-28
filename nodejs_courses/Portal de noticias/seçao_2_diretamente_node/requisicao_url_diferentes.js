var http = require('http');  

var server = http.createServer( function(req, res){

    var categoria = req.url; //irá pegar as informaçoes dps do /
    if(categoria == '/tecnologia'){
        res.end("<html><body>Porta de tecnologia</body></html>");
    }else if (categoria == '/moda'){
        res.end("<html><body>Porta de Moda</body></html>");
    }else{
        res.end("<html><body>Porta de Noticias</body></html>");
    }
}); 

server.listen(3000);
