//     *
//    **
//   ***
//  ****
// *****

const rows = 5;

for (let i = 1; i <= rows; i++) {
    //for printing spaces
    let starts = '';
    for (let j = 1; j <= rows - 1; j++) {
        starts += ' ';
    }

    //for printing start

    for (let j = 1; j <= i; j++) {
        starts += '*';
    }

    console.log(starts);
}
