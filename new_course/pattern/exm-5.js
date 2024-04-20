// 1
// 22
// 333
// 4444
// 55555

const rows = 5;

for (let i = 1; i <= rows; i++) {
    let output = '';
    for (let j = 1; j <= i; j++) {
        output += i;
    }

    console.log(output)
}
