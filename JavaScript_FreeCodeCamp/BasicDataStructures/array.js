/*a
Array.push() -> adiciona ao final da lista
Array.unshift() -> adiciona no começo da lista
*/

function mixedNumbers(arr) {
    // Only change code below this line
    let beginnig = ['I',2,'three'];
    let end = [7,'VIII',9];
    for(var i=2; i>=0;i--){
      arr.unshift(beginnig[i]);
    }
    for(var i=0; i<3;i++){
      arr.push(end[i])
    }
     
    // Only change code above this line
    return arr;
}
  
console.log(mixedNumbers(['IV', 5, 'six']));