var mysql = require('mysql');

var connMySQL = function(){
    return mysql.createConnection({
        host : 'localhost',
        user : 'root',
        password : '1234',
        database : 'noticias'
    });
}

module.exports = function(){
    return connMySQL;
}

//não precisa ficar upando SEMPRE o banco de dados. Vamos embrulhar esse método em uma funcao, e só executamos quando queremos