/* With the rest parameter, you can create functions that take a variable
 number of arguments. These arguments are stored in an array that can be accessed 
 later from inside the function.*/
function howMany(...args) {
  return "You have passed " + args.length + " arguments.";
}
console.log(howMany(0, 1, 2));
console.log(howMany("string", null, [1, 2, 3], { }));

const sum = (...args) => {
    return args.reduce((a, b) => a + b, 0);
}

