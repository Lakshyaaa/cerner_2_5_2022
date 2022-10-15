//"cerner_2^5_2022"
//"cerner_2tothe5th_2022"


function isInt(num) {
    return num % 1 === 0;
}

console.log(isInt(4)); // true
console.log(isInt(12.2)); // false
console.log(isInt(0.3)); // false