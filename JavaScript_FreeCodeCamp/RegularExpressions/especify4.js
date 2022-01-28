/*Lookaheads are patterns that tell JavaScript to look-ahead
in your string to check for patterns further along. This can
be useful when you want to search for multiple patterns over
the same string.

->A positive lookahead is used as (?=...) where the ... is the required part that is not matched.
-> a negative lookahead will look to make sure the element in the search pattern is not there. A
negative lookahead is used as (?!...) where the ... is the pattern that you do not want to be there. 

*/
//Use lookaheads in the pwRegex to match passwords that are greater than 5 characters long, and have two consecutive digits.



let sampleWord = "astronaut";
let pwRegex = /(?=\w{6})(?=\w*\d{2})/; // Change this line
let result = pwRegex.test(sampleWord);