let foods = {
  apples: 25,
  oranges: 32,
  plums: 28,
  bananas: 13,
  grapes: 35,
  strawberries: 27
};

// PARA DELETAR ALGUMA PROPRIEDADE:
delete foods.oranges;
delete foods.plums;
delete foods.strawberries;

//--------------------------------------------------------------------------------------------------------------------------------//

let users = {
  Alan: {
    age: 27,
    online: true
  },
  Jeff: {
    age: 32,
    online: true
  },
  Sarah: {
    age: 48,
    online: false
  },
  Ryan: {
    age: 19,
    online: true
  }
};

// CHECAR A PROPRIEDADE DE UM OBJETO
console.log(users.hasOwnProperty('Alan'));
console.log('Alan' in users);

// for...in Statement vai pegar a propriedade que queremos
for(let user in users){
    console.log(user);
}
console.log();

function countOnline(usersObj) {
  // Only change code below this line
  var count = 0;
  for(let user in usersObj){
    count += (usersObj[user].online == true) ? 1:0;
  }
  return count;
  // Only change code above this line
}
console.log(countOnline(users));

//--------------------------------------------------------------------------------------------------------------------------------//
// Object.keys() para encontrar as chaves do nosso objeto
function getArrayOfUsers(obj) {
  // Only change code below this line
  
  return Object.keys(obj);
  // Only change code above this line
}

console.log(getArrayOfUsers(users));