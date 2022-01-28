/* REMEMBER:
-> Recall that you use the plus sign + to look for one or more characters
-> and the asterisk * to look for zero or more characters. */

/* QUANTITY SPECIFIERS
for example, to match only the letter a appearing between
3 and 5 times in the string ah, your regex would be /a{3,5}h/. */

let ohStr = "Ohhh no";
let ohRegex = /Oh{3,6}\sno/; // Change this line
let result = ohRegex.test(ohStr);
console.log(result);