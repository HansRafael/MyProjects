const user = {
    johnDoe: { 
      age: 34,
      email: 'johnDoe@freeCodeCamp.com'
    }
};

const { johnDoe: {age, email: userEmail}} = user;  //in this way, we can get a value from a property
console.log(userEmail);