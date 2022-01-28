// Setup
function phoneticLookup(val) {

    // Only change code below this line
    var lookup = {
      "alpha":"Adams",
      "bravo": "Boston",
      "charlie": "Chicago",
      "delta": "Denver",
      "echo": "Easy",
      "foxtrot":"Frank"
    }
    var result = lookup[val];
    // Only change code above this line
    return result;
}
var cat = {
    name: "Whiskers",
    "legs": 4,
    "tails": 1,
    "enemies": ["Water", "Dogs"]
};
  
//console.log(phoneticLookup("delta"));
function checkObj(obj, checkProp) {
    // Only change code below this line
    console.log(obj);
    var result = "";
    result = checkProp
    
    if(obj.hasOwnProperty(result) === true){
      return obj[result];
    }
    else{
      return "Not Found";
    }
  
  
    // Only change code above this line
}
console.log(checkObj({gift: "pony", pet: "kitten", bed: "sleigh"}, "bed"));