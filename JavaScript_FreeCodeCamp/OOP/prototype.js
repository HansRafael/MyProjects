//Properties in the prototype are shared among ALL instances of the Object
function Dog(name,color) {
  this.name = name,
  this.color= color;
}

Dog.prototype.numLegs = 4;
let beagle = new Dog("Snoopy","Black");
console.log(beagle);
console.log(beagle.numLegs);

let ownProps = [];
let prototypeProps = [];

// Only change code below this line
for(let property in beagle){
  if(beagle.hasOwnProperty(property)){
    ownProps.push(property)
  }
  else{
    prototypeProps.push(property)
  }
}
console.log(ownProps);
console.log(prototypeProps);

// CONSTRUCTOR -> The advantage of the constructor property is that it's possible to check for this property to find out what kind of object it is.

function joinDogFraternity(candidate) {
  return (candidate.constructor === Dog) ? true : false;
}
console.log(joinDogFraternity(beagle));