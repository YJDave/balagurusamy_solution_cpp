/*

    write a C++ program that will ask for a temperature in Fahrenheit and display in Celsius

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
    float temp;

    cout<<"\nEnter the temperature in Fahrenheit : ";
    cin>>temp;

    temp = (temp-32)*5/9;

    cout<<"\nTemperature in Celsius is  : "<<temp<<endl;
    return 0;
}
