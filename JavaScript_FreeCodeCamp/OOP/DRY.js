/**There's a principle in programming called Don't Repeat Yourself (DRY).
 * The reason repeated code is a problem is because any change requires
 * fixing code in multiple places. This usually means more work for programmers
 * and more room for errors. */


function Cat(name) {
  this.name = name;
}

Cat.prototype = {
  constructor: Cat,
};

function Bear(name) {
  this.name = name;
}

Bear.prototype = {
  constructor: Bear,
};

function Animal() { }

/*The describe method is repeated in two places.
The code can be edited to follow the DRY principle
by creating a supertype (or parent) called Animal: */

Animal.prototype = {
  constructor: Animal,
  eat: function(){
    console.log("nom nom nom")
  }

};
//dessa maneira, Cat herdou as característica de Aniaml
let caty = new Animal("Molly");
caty.eat();

let animal = Object.create(Animal.prototype);