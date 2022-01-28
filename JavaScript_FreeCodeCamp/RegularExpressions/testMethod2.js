//i can search for multiple patterns usgnt the OR: |

let petString = "James has a pet cat.";
let petRegex = /dog|cat|bird|fish/; // Change this line
let result = petRegex.test(petString);
console.log(result);