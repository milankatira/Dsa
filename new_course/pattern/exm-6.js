// 54321
// 5432
// 543
// 54
// 5

const rows = 5;

for (let i = 1; i <= rows; i++) {
    let output = '';
    for (let j = rows; j >= i; j--) {
        output += j;
    }
    console.log(output);
}
