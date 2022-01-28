/**A more efficient way is to set the prototype to a new
 * object that already contains the properties. This way,
 * the properties are added all at once: */

//isso aqui é um CONSTRUTOR
function Dog(name) {
  this.name = name;
}

Dog.prototype = {
  numLegs: 4,
  eat: function(){
    console.log("Slug Slug Sei láK");
  },
  describe: function(){
    console.log(`My name is ${this.name}`)
  }

};

let beagle = new Dog("Molly");
beagle.eat();
beagle.describe();
//podemos ver que Beagle herdou as caracteristicar do objeto Dog
console.log(Dog.prototype.isPrototypeOf(beagle));
console.log(Object.prototype.isPrototypeOf(Dog.prototype));