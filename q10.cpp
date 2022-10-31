// Write a C++ program to add all the numbers of an array of size 10

#include <iostream>
using namespace std;
int Sum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int arr[10] = {12, 24, 15, 23, 44, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The sum of elements in a given array is " << Sum(arr, n);
    return 0;
}