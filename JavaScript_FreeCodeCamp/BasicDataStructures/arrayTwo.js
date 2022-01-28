/*a
Array.pop() -> remove ao final da lista
Array.shift() -> reomve no começo da lista

we can return the value of the removed iten with either method:
*/

let greetings = ['whats up?', 'hello', 'see ya!'];
let popped = greetings.pop();
console.log(popped);

/* 
also, we can remove an element from the middle of the array with the fucntion 'splice'
Array.splice()
*/

let array = ['I', 'am', 'feeling', 'really', 'happy'];

let newArray = array.splice(3, 2);
console.log(newArray);

//o terceiro argumento do Array.splice() são os novos itens que serão adicioonados no lugar do index removido
function htmlColorNames(arr) {
    // Only change code below this line
    arr.splice(0,2,'DarkSalmon','BlanchedAlmond')
    // Only change code above this line
    return arr;
}
console.log(htmlColorNames(['DarkGoldenRod', 'WhiteSmoke', 'LavenderBlush', 'PaleTurquoise', 'FireBrick']));

/**
 * Array.slice()
 * slice não modifica a array, ela apenas copia ou extrai os valores. Recebe apenas
 * dois argumento.
 * O primeiro diz onde VAI COMEÇAR a extração, e o segundo ONDE VAI parar a extração.
 */
function forecast(arr) {
  // Only change code below this line
  let tempo = arr.slice(2, 4);
  return tempo;
}

// Only change code above this line
console.log(forecast(['cold', 'rainy', 'warm', 'sunny', 'cool', 'thunderstorms']));

//também podemos copiar com o operador '...'
let thisArray = [true, true, undefined, false, null];
let thatArray = [...thisArray];

function copyMachine(arr, num) {
    let newArr = [];
    while (num >= 1) {
      // Only change code below this line
      newArr.push(['podemos colocar em qualquer lugar a copia\n',...arr]);
      // Only change code above this line
      num--;
    }
    return newArr;
}
    
console.log(copyMachine([true, false, true], 2));



