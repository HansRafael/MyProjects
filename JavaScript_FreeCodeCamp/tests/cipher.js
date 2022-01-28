function rot13(str) {
    let string = "";
    var nonAplhanumeric = /[\W]|_/;

    for(var i=0; i < str.length; i++){
        if(nonAplhanumeric.test(str[i]) === false){
            console.log(str.charCodeAt(i),((str.charCodeAt(i) + 13 - 65) % 26),((str.charCodeAt(i) + 13 - 65) % 26 + 65) );
            let char = ((str.charCodeAt(i) + 13 - 65) % 26 + 65);
            let newChar = String.fromCharCode(char);
            
            string += newChar;
        }
        else{
            string += str[i];
        }
            


    }
    return string;

}
  
console.log(rot13("A Z SERR PBQR PNZC!!"));
console.log(13%26);
