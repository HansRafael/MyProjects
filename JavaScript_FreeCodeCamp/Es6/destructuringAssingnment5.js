//Destructuring assignment
const user = { name: 'John Doe', age: 34 };

const name = user.name;
const age = user.age;

//is equal to: 

const { name, age } = user;

//also, we can change the name of the variable with:

const {name: userName, age: userAge} = user; //-> "get the value of user.name and assign it to a new variable named userName
console.log(userName);
