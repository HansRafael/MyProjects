/*In regular expressions, a greedy match finds the longest
possible part of a string that fits the regex pattern and
returns it as a match */
let text = "<h1>Winter is coming</h1>";
let myRegex = /<.*?>/; // Change this line
let result = text.match(myRegex);

console.log(result);

//we can use also /^story/ -> find the first occurence of story
//                /story$/ -> find the last occurence of story