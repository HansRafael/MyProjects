var globalArray = [5, 6, 3, 2, 9];
function nonMutatingSort(arr) {
  // Only change code below this line
  var lista = [...arr];
  console.log(lista)

  return lista.sort(function(a,b){
    return a === b ? 0: a>b ? 1:-1;
  });
  // Only change code above this line
}
var a=nonMutatingSort(globalArray);
console.log(a);