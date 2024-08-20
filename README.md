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


### do while() loop

A do-while loop is a statement that executes a part of code at least once, and then repeatedly executes the code as long as a specified condition remains true. The condition is evaluated after the execution of the code block, making sure that the code runs at least one time.

## CODE
```
#include<iostream>
using namespace std;
int main (){
    int n ;
    cout<< "Enter the number till which you want series to be printed" << endl;
    cin>>n;

    int i = 1;
    
    while(i<=n) {
        cout<<i<<" ";
        i = i + 1; 
    }

    int m;
    cout << endl;
    cout << "Enter the value you want the printing of numbers " << endl;
    cin >> m;

    cout << "Printing count from 1 till " << m << endl;

    for ( int i = 1;  i <= m; i++ ){
        
            cout << i << " ";
    
    }

    int o;
    int k;
    cout << endl;
    cout << "Enter the value you want the printing of numbers " << endl;
    cin >> o;

    do{
        cout << k << endl;
        k++;
    }
    while(o< k);

}
```
## OUTPUT
## CONCLUSION 

Learnt how to implement all the type of decision making statement loops like for, while and do while in C++ programming language
