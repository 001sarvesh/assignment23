//  Write a C++ program to swap values of two int variables without using third variable

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the numbers which you want to swap" << endl;
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swapping numbers are " << a << " and " << b;

    return 0;
}