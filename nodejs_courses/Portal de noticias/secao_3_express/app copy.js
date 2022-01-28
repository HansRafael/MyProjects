var express = require('express'); 
var app = express(); 

app.set('view engine', 'ejs')              

app.get('/', function(req, res){  
    res.render("<html><body>Porta de Noticias</body></html>");
});

app.get('/tecno', function(req, res){ 
    res.render("secao/tecnologia");
});


app.listen(3000, function(){ 
    console.log('serv on');
})
