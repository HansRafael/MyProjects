let longHand = /[A-Za-z0-9_]+/;  //all the alphabet. It's equal to /\w+/
let shortHand = /\w+/;
let numbers = "42";
let varNames = "important_var";
longHand.test(numbers);
shortHand.test(numbers);
longHand.test(varNames);
shortHand.test(varNames);