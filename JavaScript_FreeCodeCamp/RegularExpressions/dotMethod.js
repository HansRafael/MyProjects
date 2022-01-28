/*The wildcard character . will match any one character.
The wildcard is also called dot and period. You can use
the wildcard character just like any other character in the
regex. For example, if you wanted to match hug, huh, hut, and
hum, you can use the regex /hu./ to match all four words.
*/

let exampleStr = "Let's have fun with regular fun expressions!";
let unRegex = /un./; // Change this line
let unRegex2 = /un./gi;
let result = unRegex.test(exampleStr);

let resultMatch = exampleStr.match(unRegex2);
console.log(result);
console.log(resultMatch);