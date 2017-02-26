/*
 * MIPS_Assignment_6.cpp
 *
 *  Created on: Nov 28, 2014
 *      Author: Adam
 */
# include <iostream>

using namespace std;

int Mul(int, int);

int main() {
    int a = 4;
    int b = 5;

    cout << "The value of a is: " << a << endl;
    cout << "The value of b is: " << b << endl;
    cout << "The result of the multiplication is: " << Mul(a, b) << endl;

    return 0;
}

/*****************************************************************************
 * Mul - This function uses recursion to find the product of a and b.
 */
int Mul(int a, int b) {
    if (b == 1) {
        return a;
    } else
        return a + Mul(a, b - 1);
}


