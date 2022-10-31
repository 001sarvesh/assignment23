// 9. Write a C++ program to find the maximum of two numbers.

#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter two numbers which you want to compare"<<endl;
    cin>>a>>b;
    if (a>b)
    {
        cout<<"The Max of these two numbers is "<< a <<endl;

    }
   
    else{
        cout<<"The greater number is "<< b <<endl;
    }
  

    
  return 0 ;
}