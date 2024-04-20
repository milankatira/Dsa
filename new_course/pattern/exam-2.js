// *****
// ****
// ***
// **
// *

const rows = 5;

for (let i = rows; i >= 1; i--) {
    let start = '';
    for (let j = 1; j <= i; j++) {
        start += '*';
    }
    console.log(start);
}
