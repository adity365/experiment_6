# Experiment 6: - To study and implement C++ decision making statements Loops

## Aim
To learn how to implement decision making statement loops like for, while and do while in C++

## Theory
Decision-making loops are beneficial for running a block of code repeatedly for conditions that may range from 1 to infinity.
In this experiment we learn about 3 decsion making statement loops which are as follows: -
1. for() loop
2. while() loop
3. do while() loop

### 1. for() loop

A for loop is a statement that executes a part of code repeatedly for a specific number of iterations. It continues to run the code until a predefined condition is met.


### 2. while() loop

A while loop is a statement that repeatedly executes a part of code as long as a condition remains true. It continues to run the code until the condition evaluates to false.


### 3. do while() loop

A do-while loop is a statement that executes a part of code at least once, and then repeatedly executes the code as long as a specified condition remains true. The condition is evaluated after the execution of the code block, making sure that the code runs at least one time.

### 4 . nested for() loop , nested do() while loop , nested while() loop , nested for matrix 

Nested loop means a loop statement inside another loop statement. That is why nested loops are also called as "loop inside loop".

## CODE
```
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number till which you want the series to be printed: " << endl;
    cin >> n;

    int i = 1;
    // While loop
    while(i <= n) {
        cout << i << " ";
        i++;
    }

    cout << endl;

    int m;
    cout << "Enter the value up to which you want the printing of numbers: " << endl;
    cin >> m;

    cout << "Printing count from 1 till " << m << endl;

    // For loop
    for (int i = 1; i <= m; i++) {
        cout << i << " ";
    }

    cout << endl;

    int o;
    cout << "Enter the value up to which you want number to be printed: " << endl;
    cin >> o;

    int k = 1;
    // Do-while loop
    do {
        cout << k << " ";
        k++;
    } while (k <= o);

    cout << endl;

    // Nested for loop - pattern printing
    cout << "Using nested for loops for pattern: " << endl;
    int n2 = 5;
    for (int ii = 1; ii <= n2; ii++) {
        for (int j = 1; j <= n2 - ii; j++) {
            cout << " ";
        }
        for (int k = 0; k < 2 * ii - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    // Nested do-while loop - product calculation
    cout << "Using nested do-while to find the product of numbers:" << endl;
    int q = 0;
    do {
        q++;
        int r = 0; // Reset r inside the outer loop
        do {
            r++;
            cout << "Product of two numbers: " << q * r << endl;
        } while (r < 10);
    } while (q < 10);

    cout << endl;

    // Nested while loop - sum calculation
    cout << "Sum of 2 numbers using nested while: " << endl;
    int q2 = 10;
    while (q2 > 0) {
        q2--;
        int r2 = 10; // Reset r2 inside the outer loop
        while (r2 > 0) {
            r2--;
            cout << "Sum: " << q2 + r2 << endl;
        }
    }

    cout << endl;

    // Nested for loops - matrix
    cout << "Using nested for loops for matrix: " << endl;
    int mat[2][2][2] = {
        {
            {1, 2},
            {3, 4}
        }, 
        {
            {5, 6}, 
            {7, 8}
        }
    };

    for (int m = 0; m < 2; ++m) {
        for (int n = 0; n < 2; ++n) {
            for (int p = 0; p < 2; ++p) {
                cout << mat[m][n][p] << " ";
            }
            cout << endl;
        }
    }

    cout << endl;

    // Nested for loop with while - matrix condition check
    cout << "Using nested for loops and while for matrix and checking some condition: " << endl;
    int mat1[2][2][2] = {
        {
            {1, 2},
            {3, 4}
        }, 
        {
            {5, 6}, 
            {7, 8}
        }
    };

    for (int m1 = 0; m1 < 2; ++m1) {
        for (int n1 = 0; n1 < 2; ++n1) {
            for (int p1 = 0; p1 < 2; ++p1) {
                while(mat1[m1][n1][p1] < 8) {
                    cout << mat1[m1][n1][p1] << " ";
                    break;
                }
            }
            cout << endl;
        }
    }

    cout << endl;

    return 0;
}


```
## OUTPUT
![image](https://github.com/user-attachments/assets/ec756966-8966-4932-af4e-f73f3284f707)

## CONCLUSION 

Learnt how to implement all the type of decision making statement loops like for, while and do while in C++ programming language
