let users = {
  Alan: {
    age: 27,
    online: true
  },
  Jeff: {
    age: 32,
    online: true
  },
  Sarah: {
    age: 48,
    online: true
  },
  Ryan: {
    age: 19,
    online: true
  }
};

function isEveryoneHere(userObj) {
  // Only change code below this line
  const names = ['Alan', 'Jeff', 'Sarah','Ryan'];
  var count = 0;
  for(let i=0; i<4; i++){
    if(names[i] in userObj){
      count+=1;
    }
  }
  return (count==4) ? true : false;
  // Only change code above this line
}

console.log(isEveryoneHere(users));