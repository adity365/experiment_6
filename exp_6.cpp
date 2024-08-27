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

