//The shortcut to look for non-digit characters is \D. This is equal to the character class [^0-9]

let movieName = "2001: A Space Odyssey";
let noNumRegex = /\D/g; // Change this line
let result = movieName.match(noNumRegex);
console.log(result);