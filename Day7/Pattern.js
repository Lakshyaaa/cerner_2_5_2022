//--"cerner_2^5_2022" "cerner_2tothe5th_2022"
//Print Square Star Pattern.

let n = 5; // row or column count

// defining an empty string
let string = "";

for (let i = 0; i < n; i++) { // external loop
    for (let j = 0; j < n; j++) { // internal loop
        string += "*";
    }
    // newline after each row
    string += "\n";
}
// printing the string
console.log(string);