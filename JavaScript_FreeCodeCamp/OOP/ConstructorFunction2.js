function Dog(name,color) {
  this.name = name;
  this.color = color;
  this.numLegs = 4;
}
let terrier = new Dog("Molly","Black");
console.log(terrier);

/**Anytime a constructor function creates a new object, that object is
 * said to be an instance of its constructor. JavaScript gives a convenient
 * way to verify this with the instanceof operator. instanceof allows you
 * to compare an object to a constructor, returning true or false based on
 * whether or not that object was created with the constructor. */

function House(numBedrooms) {
  this.numBedrooms = numBedrooms;
}
// Only change code below this line
let myHouse = new House(10);
console.log(myHouse instanceof House);

// _________________ CHECANDO AS PROPRIEDADES _________________________ //
let ownProps = [];

for(let property in terrier){
  if(terrier.hasOwnProperty(property)){
    ownProps.push(property)
  }
}
console.log(ownProps);

//__________________ DEIXAR PROPRIEDADE PRIVADA ___________________//
function Bird() {
  let weight = 15;

  this.getWeight = function(){
    return weight;
  }

}
let ducky = new Bird();
console.log(ducky.getWeight()); //=> dessa maneira, só conseguimos RETORNAR O valor, mas não temos como alterar, visto que está dentro do escopo do próprio construtor Bird!
