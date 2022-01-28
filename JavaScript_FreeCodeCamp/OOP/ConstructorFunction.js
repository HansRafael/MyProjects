// Constructors are functions that create new objects.
/**Constructors are defined with a capitalized name to distinguish them from other functions that are not constructors.
 * Constructors use the keyword this to set properties of the object they will create. Inside the constructor, this refers to the new object it will create.
 * Constructors define properties and behaviors instead of returning a value as other functions might. */
function Dog(){
  this.name = 'Bily',
  this.color = 'black',
  this.numLegs = 10
}