//Concatenation means to join items end to end
function nonMutatingConcat(original, attach) {
  // Only change code below this line
  var arr = original.concat(attach);
  return arr;

  // Only change code above this line
}
var first = [1, 2, 3];
var second = [4, 5];
nonMutatingConcat(first, second);

//dessa maneira, a lista se mantem preservada e nao é alterada.
//concat offers a way to add new items to the end of an array without any mutating side effects.