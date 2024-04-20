questions


1.
```
*
**
***
****
*****
```


answer -

```cpp
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
```


```js
const rows = 5;

for (let i = 1; i <= rows; i++) {
    let stars = '';
    for (let j = 1; j <= i; j++) {
        stars += '*';
    }
    console.log(stars);
}
```



2.

```
*****
****
***
**
*
```


```cpp
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = rows; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
```

```js
const rows = 5;

for (let i = rows; i >= 1; i--) {
    let start = '';
    for (let j = 1; j <= i; j++) {
        start += '*';
    }
    console.log(start);
}
```

3.

```
     *
    **
   ***
  ****
 *****
```

```cpp
#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; ++i)
    {
        // for printing spaces
        for (int j = 1; j <= rows - i; ++j)
        {
            cout << " ";
        }

        // for printing starts spaces
        for (int k = 1; k <= i; ++k)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
```


```js
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
```


4.

```
    *
   ***
  *****
 *******
*********
```


```cpp

#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Outer loop for the number of rows
    for (int i = 1; i <= rows; ++i)
    {
        // Inner loop for printing spaces
        for (int j = 1; j <= rows - i; ++j)
        {
            cout << " ";
        }
        // Inner loop for printing '*' in each row
        for (int k = 1; k <= 2 * i - 1; ++k)
        {
            cout << "*";
        }
        // Move to the next line after printing all '*' in the row
        cout << endl;
    }

    return 0;
}
```

```js

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
```

5.

```
1
22
333
4444
55555
```


```cpp

#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
```

```js

const rows = 5;

for (let i = 1; i <= rows; i++) {
    let output = '';
    for (let j = 1; j <= i; j++) {
        output += i;
    }

    console.log(output)
}
```

6.
```
54321
5432
543
54
5
```


```cpp

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Outer loop for the number of rows
    for (int i = 1; i <= rows; ++i) {
        // Inner loop for printing numbers in descending order
        for (int j = rows; j >= i; --j) {
            cout << j;
        }
        // Move to the next line after printing numbers in each row
        cout << endl;
    }

    return 0;
}

```

```js
const rows = 5;

for (let i = 1; i <= rows; i++) {
    let output = '';
    for (let j = rows; j >= i; j--) {
        output += j;
    }
    console.log(output);
}

```

7.
```
A
BB
CCC
DDDD
EEEEE
```


```cpp

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    // ASCII value for 'A' is 65
    int asciiValue = 65;

    // Outer loop for the number of rows
    for (int i = 1; i <= rows; ++i) {
        // Inner loop for printing characters 'i' times
        for (int j = 1; j <= i; ++j) {
            cout << char(asciiValue);
        }
        // Increment ASCII value for the next row
        ++asciiValue;
        // Move to the next line after printing characters in each row
        cout << endl;
    }

    return 0;
}
```

```js
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

```

8.
```
    1
   232
  34543
 4567654
567898765
```

```cpp

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    int number = 1;

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= rows - i; ++j) {
            cout << " ";
        }
        // Inner loop for printing numbers in ascending order
        for (int k = 1; k <= i; ++k) {
            cout << number++;
        }
        // Decrement number for the next part of the row
        number -= 2;
        // Inner loop for printing numbers in descending order
        for (int l = 1; l < i; ++l) {
            cout << number--;
        }
        // Increment number for the next row
        number += 2;
        // Move to the next line after printing numbers in each row
        cout << endl;
    }

    return 0;
}
```

```js

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
```