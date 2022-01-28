//se Destructuring Assignment with the Rest Parameter to Reassign Array Elements
const [a, b, ...arr] = [1, 2, 3, 4, 5, 7];
console.log(a, b);
console.log(arr);


//selecte the list without the two first elements (omitted)
const source = [1,2,3,4,5,6,7,8,9,10];
function removeFirstTwo(list) {
  // Only change code below this line
  const [ , ,...arr] = list; // Change this line
  

  // Only change code above this line
  return arr;
}
const arr = removeFirstTwo(source);