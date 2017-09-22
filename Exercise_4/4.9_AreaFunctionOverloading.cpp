/*
    Area of circle = 2*PIE*radius
    Area of triangle = base*height/2
*/

#include<iostream>
#include<cmath>
#include<stdio.h>

//define fix value of PIW
#define PIE 3.141592654

using std::cout;
using std::cin;

//method to find area of circle
double area(double radius)
{
    return 2*PIE*radius;
}

//method to find area of triangle
double area(double base, double height)
{
    return base*height/2;
}

int main()
{
    double r,s,a;
    cout<<"\nEnter the radius of circle : ";
    cin>>r;

    cout<<"\n\nArea of circle is : ";
    printf("%.8f",area(r));
    cout<<"\n\nEnter the base of triangle : ";
    cin>>r;
    cout<<"\nEnter the height of triangle : ";
    cin>>s;
    cout<<"\n\nArea of triangle is : ";
    printf("%.8f\n",area(r));
    return 0;

}