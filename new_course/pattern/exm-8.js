//     1
//    232
//   34543
//  4567654
// 567898765

const numberOfRows = 3;

for (let i = 1; i <= numberOfRows; ++i) {
    let line = ''; // Initialize an empty string for the row

    // Loop for printing spaces before the numbers in each row
    for (let j = 1; j <= numberOfRows - i; ++j) {
        line += ' ';
    }

    let number = i; // Initialize number to be printed

    // Inner loop for printing numbers in ascending order
    for (let k = 1; k <= i; ++k) {
        line += number++;
    }

    // Decrement number to prepare for descending order printing
    number -= 2;

    // Inner loop for printing numbers in descending order
    for (let l = 1; l < i; ++l) {
        line += number--;
    }

    // Log the line to the console
    console.log(line);
}