//let != var
//uma vez declarada a variavel com let, nao tem como criar outra variavel let com o omsmo nome
let camper = 'jams';
console.log(camper);
camper = 'sda';
console.log(camper);

const CONSTANTE = 10; //como o nome diz, é uma constante. n tem como alterar
//CONSTANTE = 22;
console.log(CONSTANTE);

//Com o Object.freeze() o objeto realmte é congelado
let obj = {
    name:"FreeCodeCamp",
    review:"Awesome"

};
Object.freeze(obj);
obj.review = "bad"; //n altera
obj.newProp = "Test"; //e nem adiciona uma propriedade
console.log(obj); 