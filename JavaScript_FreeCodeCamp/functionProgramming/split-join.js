/**The split method splits a string into an array
 * of strings. It takes an argument for the delimiter,
 * which can be a character to use to break up the
 * string or a regular expression. For example, if
 * the delimiter is a space, you get an array of words,
 * and if the delimiter is an empty string, you get an
 * array of each character in the string. */

function splitify(str) {
  // Only change code below this line

  return str.split(/\W/);

  // Only change code above this line
}
var a =splitify("Hello World,I-am code");
console.log(a);

/**The join method is used to join the elements of an array
 * together to create a string. It takes an argument for
 * the delimiter that is used to separate the array elements in the string. */

function sentensify(str) {
  // Only change code below this line
  var old = str.split(/\W/);
  return old.join(" ");

  // Only change code above this line
}
var b = sentensify("May-the-force-be-with-you");
console.log(b)