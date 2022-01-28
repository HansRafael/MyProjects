// 10 DIGITOS
// SE TIVER 11, O PRIMEIRO PRECISA SER 1
/**
 * 555-555-5555     OK
 * (555)555-5555    OK
 * (555) 555-5555   OK
 * 555 555 5555     OK
 * 5555555555       OK
 * 1 555 555 5555 */
function telephoneCheck(str){
    let regTest = /\d{10}./gi;

    let regOne = /^(\d{3})\S+(\d{3})\S+(\d{4})/;
    let regTwo = /^(\d{3})\s*(\d{3})\s*(\d{4})/;
    let regTree = /^\S+(\d{3})\S+\s*(\d{3})\S+(\d{4})/;

    let regCOrret = /^(1\s?)? (\(\d{3}\)|\d{3}) [\s\-]? \d{3} [\s\-]? \d{4}$/;

    let test = regTest.test(str);
    let result = regOne.test(str);
    let result2 = regTwo.test(str);
    let result3 = regTree.test(str);
    
    console.log(test);
    console.log(result);
    console.log(result2);
    console.log(result3);

    if((result || result2 || result3)=== true){
        return true;
    }
    else{
        return false;
    }
}


let a = telephoneCheck("(275)76227382")
console.log('\n'+a);