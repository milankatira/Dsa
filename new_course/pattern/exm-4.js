//     *
//    ***
//   *****
//  *******
// *********

const rows = 5;

for (let i = 1; i <= rows; i++) {
    let stars = '';
    // for printing spaces
    for (let j = 1; j <= rows - i; j++) {
        stars += ' ';
    }
    // for printing stars
    for (let k = 1; k <= (i * 2) - 1; k++) {
        stars += '*';
    }
    console.log(stars);
}