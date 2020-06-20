/*
    Write a program to print the following output using for loops.
    1
    22
    333
    4444
    55555
    .......

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
    int no_of_line;
    
    cout<<"\nEnter the no of line you want to print : ";
    cin>>no_of_line;

    for(int i=1;i<=no_of_line;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<"\n";
    }
    return 0;
}