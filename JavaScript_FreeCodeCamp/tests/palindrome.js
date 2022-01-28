function palindrome(strOne) {
  var str = remove(strOne);

  var normalString = str;
  console.log(str);
  var tam = (str.length) - 1;
      
  for(let i =0; i < tam; i++){
    if (normalString[i] === str[tam-i]){
      //pass
    }
    else {
      return false; 
    }
  }
  
  return true;
}
  
function remove(str){
  var nonAplhanumeric = /[\W]|_/;
  var listTwo = [];

  for(let i=0; i < (str.length); i++){
    if(nonAplhanumeric.test(str[i]) === false){
      listTwo.push(str[i].toUpperCase());
    }
  }
  return listTwo
}

console.log(palindrome("my age is 0, 0 si ega ym."));
console.log('\n');
console.log(palindrome("0_0 (: /-\ :) 0-0"));