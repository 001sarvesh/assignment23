// Write a C++ program to calculate the volume of a cuboid.

#include<iostream>
using namespace std;
int main()
{
    int l,b,h,v;
    cout<<"Enter the value of l , b , h of cuboid"<<endl;
    cin>>l>>b>>h;
    v = l*b*h;
    cout<<v;
  return 0 ;
}