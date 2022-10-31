// Write a C++ program to calculate an average of 3 numbers.

#include<iostream>
using namespace std;
int main()
{
    float a,b,c, Avg,d;
    cout<<"Enter the value of a , b, c"<<endl;
    cin>>a>>b>>c;
    d = a+b+c;
    Avg = d/3;
    cout<<Avg;
  return 0 ;
}