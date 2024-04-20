const numberOfRows = 5;

// ASCII value for 'A' is 65
let asciiValue = 65;

// Outer loop for the number of rows
for (let i = 1; i <= numberOfRows; ++i) {
    // Initialize an empty string for the row
    let row = '';
    // Inner loop for printing characters 'i' times
    for (let j = 1; j <= i; ++j) {
        row += String.fromCharCode(asciiValue);
    }
    // Increment ASCII value for the next row
    ++asciiValue;
    // Log the row to the console
    console.log(row);
}
