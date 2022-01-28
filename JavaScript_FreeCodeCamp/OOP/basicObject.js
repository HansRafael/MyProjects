/* 
Objetos, além de propriedades, também tem métodos. Tais métodos nada mais são que propriedades que são funções

*/
let dog = {
  name: "Spot",
  numLegs: 4,
  sayLegs: function(){return `This dog has ${dog.numLegs} legs.`}
};

console.log(dog.sayLegs());

/**While this is a valid way to access the object's property, there is a pitfall here.
 * If the variable name changes, any code referencing the original name would need to be
 * updated as well. In a short object definition, it isn't a problem, but if an object has
 * many references to its properties there is a greater chance for error. 
 * 
 * this is a deep topic, and the above example is only one way to use it. In the current context,
 * this refers to the object that the method is associated with: duck. If the object's name is
 * changed to mallard, it is not necessary to find all the references to duck in the code.
 * It makes the code reusable and easier to read.*/
let cat = {
  name: "Spik",
  numLegs: 4,
  sayLegs: function(){return `This cat has ${this.numLegs} legs.`}
};

console.log(cat.sayLegs());