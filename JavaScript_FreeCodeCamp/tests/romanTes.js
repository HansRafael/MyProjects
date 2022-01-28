var arabicToRoman = {1: "I", 2: "II", 3: "III",  4 : "IV", 5: "V", 6: "VI", 7 : "VII", 8 : "VIII", 9 : "IX", 
10 : "X", 20 : "XX", 30 : "XXX", 40 : "XL", 50 : "L", 60 : "LX", 70 : "LXX", 80 : "LXXX", 90 : "XC", 
100 : "C", 200 : "CC", 300 : "CCC", 400 : "CD", 500 : "D", 600 : "DC", 700 : "DCC", 800 : "DCCC", 900 : "CM", 
1000: "M", 2000: "MM", 3000: "MMM"};

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
    for(let i=0; i<4;i++){
        if(arabicToRoman[sliceNumber[i]]){
            string += arabicToRoman[sliceNumber[i]]
        }
    }
    return string;
}

console.log(convertToRoman(1992))