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
    a = c;

    //first method
    cout<<"\nASCII value for "<<c<<" is "<<a;

    //second method
    cout<<"\nASCII value for "<<c<<" is "<<(int)c;
    
    //You can use any of one of this method.But second method is recommended 
    //cause it save memory as we don't need second variable.
    return 0;
}
