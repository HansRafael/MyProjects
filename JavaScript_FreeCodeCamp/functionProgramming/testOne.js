const squareList = arr => {
  // Only change code below this line
  var ratings = arr.filter(obj => (obj > 0) && (Number.isInteger(obj)));
  var lista = ratings.map(obj => obj*obj);
  arr = lista;
  return arr;
  // Only change code above this line
};

const squaredIntegers = squareList([-3, 4.8, 5, 3, -3.2]);
console.log(squaredIntegers);
console.log(typeof(3.2));


//jeito mais bonitooo

const squareList = (arr) => {
  // Only change code below this line
  return arr
          .filter(num => num > 0 && num % parseInt(num) === 0)
          .map(num => Math.pow(num, 2));
  // Only change code above this line
};

const squaredIntegers = squareList([-3, 4.8, 5, 3, -3.2]);
console.log(squaredIntegers);