var express = require('express'); //retorna a funcao, mas n executa
var app = express(); //agora sim, executa a funcao. Poderia por direto no require

app.set('view engine', 'ejs')              //express ja sabe q o motor de views sera o ejs

//é bom criar um dir de views, para os códigos em javascript + html

app.get('/', function(req, res){  //foi feito um pedido, agora tem q dar uma resposta
    res.send("<html><body>Porta de Noticias</body></html>");
});

app.get('/tecno', function(req, res){  //foi feito um pedido, agora tem q dar uma resposta
    res.send("<html><body>Porta de tecnologia</body></html>");
});



app.listen(3000, function(){  //com o express, nao precisa .creatServer
    console.log('serv on');
})
