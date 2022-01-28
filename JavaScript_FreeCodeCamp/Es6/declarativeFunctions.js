const person = {
    name: "Taylor",
    sayHello: function() {
      return `Hello! My name is ${this.name}.`;
    }
};

//is equal to ES6:

const person = {
    name: "Taylor",
    sayHello() {
      return `Hello! My name is ${this.name}.`;
    }
};