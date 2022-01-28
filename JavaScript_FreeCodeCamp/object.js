var cat = {
    name: "Whiskers",
    "legs": 4,
    "tails": 1,
    "enemies": ["Water", "Dogs"]
  };

console.log(cat.name);

cat.bark = "I'm a cat idiot!";

console.log(cat.hasOwnProperty("name"));
console.log(cat.bark);
console.log(cat); //adiciona também
delete cat.name; // vai deletar essa proprieda
console.log(cat.hasOwnProperty("name"));


// Setup
var testObj = {
    12: "Namath",
    16: "Montana",
    19: "Unitas"
};
// Only change code below this line
  
var playerNumber = 12;       // consegue alterar qual propriedade do objeto quer acessar.
var player = testObj[playerNumber];   // Change this line

console.log(player);

// alterar propriedades do objeto

testObj[12] = "cha";