/*When there is no function body,
and only a return value, arrow function
syntax allows you to omit the keyword
return as well as the brackets surrounding the code. */

const myFunc = () => "value";
const double = (item,multi)=> item * multi;
console.log(myFunc());
console.log(double(10,2))