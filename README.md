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

    //pattern

    for(int i = 0;i<=5;i++)
    {
        for(int j = 1;j<= 5-i;j++)
        {
            cout<<" ";
        }
        for(int k = 1;k<=2*i-1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    int q = 0;

    while(q<5)
        {
            for(int i = 0;i<5;i++)
                {
                    cout<<"Hello World"<<endl; 
                }
                q++;
        }
        // this will produce 25 hello world commands 5*5

    for(int i =0;i<10;i++)
    {
        while(i<5)
        {
            cout<<"World hello"<<endl;
            i++; //prints world hello 5 times 
        }
    }   

    return 0;
}



```
## OUTPUT
![image](https://github.com/user-attachments/assets/ec756966-8966-4932-af4e-f73f3284f707)

## CONCLUSION 

Learnt how to implement all the type of decision making statement loops like for, while and do while in C++ programming language
