//Match Single Characters Not Specified with ^
//For example, /[^aeiou]/gi matches all characters that are not a vowel. 
let quoteSample = "3 blind mice.";
let myRegex = /[^aeiou0-9]/gi; // Change this line
let result = quoteSample.match(myRegex); // Change this line

console.log(result);

/* you need to match a character (or group of characters)
that appears one or more times in a row. */

let difficultSpelling = "Misssssissippi";
let myRegex2 = /s+/g; // Change this line
let result2 = difficultSpelling.match(myRegex2);

console.log(result2);

/*There's also an option that matches
characters that occur zero or more times. with *   */

let soccerWord = "gooooooooal!";
let gPhrase = "gut feeling";
let oPhrase = "over the moon";
let goRegex = /go*/;
console.log(soccerWord.match(goRegex));
console.log(gPhrase.match(goRegex));
console.log(oPhrase.match(goRegex));

let stri = "Aaaaaaa2aaaaaAa3aaarrrgh!"
let chewieRegex = /Aa*/; //pega tudo A e depois tudo a até o proximo char
let result3 = stri.match(chewieRegex);
console.log(result3)