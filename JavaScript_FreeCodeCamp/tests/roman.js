const romanNumber2 = {
    1000: 'M',
    500: 'D',
    100: 'C',
    50: 'L',
    10: 'X',
    5: 'V',
    1: 'I'
}

function breakTheNumber(num){
    let breakNumber = [];
    var count = 10;
    var number = num;
    var modulo = 0;
    for(let i =0; i<4; i++){
        modulo = number%count;
        breakNumber.unshift(modulo)
        number -= modulo;
        count*=10;
    }

    return breakNumber;
}

function convertToRoman(num){
    var sliceNumber = breakTheNumber(num);
    var string = '';
    var pivo = 1000;
    for(let i=0; i<4;i++){
        string += convertToSymbols(sliceNumber[i],pivo);
        pivo /= 10;
    }
    return string;
}

function convertToSymbols(num,pivo){
    var pivo = pivo;
    var string2 = '';
    var values = [4,5,9];

    if(num<=3*pivo){
        for(let i=1;i<=num/pivo; i++){
            string2 += romanNumber2[1*pivo]
        }
    }

    else if(num===values[0]*pivo){
        string2 = romanNumber2[1*pivo] + romanNumber2[5*pivo]
    }

    else if(num ===values[1]*pivo){
        string2 = romanNumber2[5*pivo]
    }

    else if((num>=6*pivo) && (num<9*pivo)){
        string2 = romanNumber2[5*pivo]
        for(let i=6;i<=num/pivo; i++){
            string2 += romanNumber2[1*pivo]
        }
    }
    else if(num ===values[2]*pivo){
        string2 = romanNumber2[1*pivo] + romanNumber2[10*pivo]
    }

    return string2;
}




console.log(convertToRoman(1));
console.log(convertToRoman(99));