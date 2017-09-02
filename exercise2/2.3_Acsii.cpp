/*

    write a program that inputs a character from keyboard and displays its corresponding
    ASCII value on the screen.

*/

#include<iostream>
using namespace std;

int main()
{
    char c;
    int a;

    cout<<"\nEnter character to find it's ASCII value : ";
    cin>>c;
    a=c;

    //first method
    cout<<"\nASCII value for "<<c<<" is "<<a;

    //second method
    cout<<"\nASCII value for "<<c<<" is "<<(int)c;
    return 0;
}
