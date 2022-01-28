var http = require('http');  

var server = http.createServer( function(req, res){
    res.end("<html><body>Porta de Noticias</body></html>");
}); 

server.listen(3000);
//irá subir o site, e qualquer req(requisao), ele irá dar uma resposta