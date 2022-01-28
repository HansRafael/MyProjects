//importar config do servidor
var app = require('./config/server.js');

//tratar requisicoes websocket


//parametrizar a porta de escuta
var server = app.listen(80, function(){
    console.log('serv on');
})

var io = require('socket.io').listen(server);

app.set('io', io);

//criar conexao via websocket, o 'on' fica ouvindo pedidos de execucao
//'emit' pedidndo para executar alguma acao
io.on('connection', function(socket){
    console.log('Usuario conectou');

    socket.on('disconnect', function(){
        console.log('Usuariou saiu')
    });

    socket.on('msgParaServidor', function(data){
        /* dialogos */
        socket.emit(
            'msgPar',
            {apelido: data.apelido, mensagem: data.mensagem }
        );

        socket.broadcast.emit(
            'msgPar',
            {apelido: data.apelido, mensagem: data.mensagem }
        );

        /* participantes */
        if( parseInt(data.apelido_atualizado) == 0){
            socket.emit(
                'participantesParaCliente',
                {apelido: data.apelido}
            );

            socket.broadcast.emit(
                'participantesParaCliente',
                {apelido: data.apelido}
            );
        }
    });
    
});
