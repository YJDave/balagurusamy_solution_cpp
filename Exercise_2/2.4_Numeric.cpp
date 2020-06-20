/*

    write a program to read the values of a,b and c and display the value of x,
    where
                x = a/b-c

    Test you program for the following values:
    (a) a = 250, b = 85, c = 25
    (b) a = 300, b = 70, c = 70

*/

#ifdef _WIN32
#include<iostream.h>
#endif

#ifdef linux
#include<iostream>
#endif
using namespace std;

int main()
{
    float a, b, c, x;

    cout<<"\nEnter value of a : ";
    cin>>a;
    cout<<"\nEnter value of b : ";
    cin>>b;
    cout<<"\nEnter value of c : ";
    cin>>c;

    //Here you can do without using condition. But that will create error when user enter b = 0

    if ( b != 0 )
    {
        x = a/b-c;
        cout<<"\n\nBy using Equation x = a/b-c \nThe value of x is : "<<x<<endl;
    }
    else
    {
        cout<<"\nCan not divide number by Zero"<<endl;

    }

    return 0;
}
