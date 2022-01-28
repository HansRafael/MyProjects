let american = "color";
let british = "colour";
let rainbowRegex= /colou?r/;  //aqui, estou dizendo que o elemento 'u' é opcional
console.log(rainbowRegex.test(american));
console.log(rainbowRegex.test(british));