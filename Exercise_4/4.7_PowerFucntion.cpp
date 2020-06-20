/*
*/

#ifdef _WIN32
#include<iostream.h>
#include<cmath.h>
#endif

#ifdef linux
#include<iostream>
#include<cmath>
#endif

#include<stdio.h>


using std::cout;
using std::cin;

//method to perform power function using recursive formula
double power(double m,int n=2)
{
    //base condition for recursion
    if (n<0)
        n=0-n;
    if (n==0)
        return 1;
    //recursion //changed
    m = m*power(m,n-1);
    return m;
}

int main()
{
    int n;
    double m,ans;
    cout<<"\nEnter the value : ";
    cin>>m;
    cout<<"Enter the power of this value : ";
    cin>>n;
    
    ans=power(m,n);
    
    if (n<0)
        ans = 1/ans;
    
    cout<<"\n"<<m<<" ^ "<<n<<" = ";
    printf("%.8f",ans);
    cout<<"\n\nUsing default argument \nValue = "<<m<<" and power = 2 ";
    ans=power(m);
    cout<<"\n\n"<<m<<" ^ 2"<<" = ";
    printf("%.8f",ans);
    return 0;
}