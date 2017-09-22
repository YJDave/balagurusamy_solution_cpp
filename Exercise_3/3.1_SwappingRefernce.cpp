/*

    Write a function using reference variable as arguments to swap the values
    of a pair of integers.
  
*/

#include<iostream>
using namespace std;

int main()
{
    float a, b;
    cout<<"\nEnter value of First variable : ";
    cin>>a;
    cout<<"\nEnter value of Second variable : ";
    cin>>b;
    //call inbuilt swap() function which swap value of passed variables
    swap(a,b);
    cout<<"\nAfter swapping the value using reference variables argument ";
    cout<<"\n\nvalue of First variable : "<<a<<endl;
    cout<<"\nvalue of Second variable : "<<s<<endl;
    return 0;
}

void swap(int &m, int &n)
{
    int x;
    x = m;
    m = n;
    n = x;
}