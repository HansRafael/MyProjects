let quoteSample = "The * ! five boxing wizards jump quickly ";
let alphabetRegexV2 = /\W/g; // Change this line
//com o + pega um 6 -> grupo das palavras
let result = quoteSample.match(alphabetRegexV2);
console.log(result);


//just digits [0-9] => \d
let movieName = "2001: A Space Odyssey";
let numRegex = /\d/g; // Change this line
let result2 = movieName.match(numRegex).length;
let result3 = movieName.match(numRegex);
console.log(result2,result3[0]);