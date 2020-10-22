var convertToRoman = function(num) {
  var values = [1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1];
  var romanSymbols = ["M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"];

  var result = "";

  for (let i = 0; i < values.length; i++) {
    while (values[i] <= num) {
      result += romanSymbols[i];
      num -= values[i];
    }
  }

  return result;
};

// test here
console.log(convertToRoman(44)); // should return XLIV
