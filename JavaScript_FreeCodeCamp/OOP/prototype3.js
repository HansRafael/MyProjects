function Animal() { }

Animal.prototype = {
  constructor: Animal,
  eat: function() {
    console.log("nom nom nom");
  }
};

function Dog() { }




/**Remember that the prototype is like the "recipe" for creating an object.
 * In a way, the recipe for Dog now includes all the key "ingredients" from Animal. */
Dog.prototype = Object.create(Animal.prototype)

//console.log(beagle);  //aqui o construtor ainda está como animal
Dog.prototype.constructor = Dog;  //o construtor de Dog agora será Dog

//para adicionar uma nova caracterísica:
Dog.prototype.bark = function(){
  console.log('Woof!')
}

let beagle = new Dog();
//beagle inherits all of Animal's properties, including the eat method.

beagle.eat();
beagle.bark();
console.log(beagle);