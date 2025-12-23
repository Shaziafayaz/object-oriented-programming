/*Write a program to demonstrate call by reference using a function swapReference(int &x, 
int &y) that swaps two integers. Display the values before and after the function  */


#include <iostream>
using namespace std;

void swapReference(int &x, int &y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << "Inside function (after swapping): x = " << x << ", y = " << y << endl;
}

int main() {
    int a = 5, b = 10;

    cout << "Before function call: a = " << a << ", b = " << b << endl;

    swapReference(a, b);   // call by reference

    cout << "After function call: a = " << a << ", b = " << b << endl;

    return 0;
}

