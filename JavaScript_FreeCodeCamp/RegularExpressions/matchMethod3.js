//Match Single Character with Multiple Possibilities
/* You can create the regex /b[aiu]g/ to do this. The
[aiu] is the character class that will only match the
characters a, i, or u. */
let quoteSample = "Beware of bugs in the above code; I have only proved it correct, not tried it.";
let vowelRegex = /[aeiou]/gi; // Change this line
let result = quoteSample.match(vowelRegex); // Change this line
console.log(result);


let quoteSample2 = "The quick brown fox jumps over the lazy dog.";
let alphabetRegex2 = /[a-z]/gi; // Change this line
let result2 = quoteSample2.match(alphabetRegex2); // Change this line

console.log(result2);

let quoteSample3 = "Blueberry 3.141592653s are delicious.";
let myRegex3 = /[h-s2-6]......./gi; // Change this line
let result3 = quoteSample3.match(myRegex3); // Change this line
console.log(result3);