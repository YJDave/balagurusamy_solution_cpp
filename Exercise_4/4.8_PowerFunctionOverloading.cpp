/*
*/

#include<iostream>
#include<stdio.h>
#include<cmath>

using std::cout;
using std::cin;

//method to perform power function using recursive formula
//double m-first method
double power(double m,int n=2)
{
    //base condition for recursion
    if (n<0)
        n=0-n;
    if (n==0)
        return 1;
        //recursion 
        m = m*power(m,n-1);
        return m;
}

//same method but type of argument is different
//int m-second method
double power(int m,int n=2)
{
    //base condition for recursion
    if (n<0)
        n=0-n;
    if (n==0)
        return 1;
        //recursion 
        m = m*power(m,n-1);
        return m;
}

int main()
{
    //m1 double value and m2 int value to implement both function
    int n;
    double m,ans1,ans2;

    cout<<"\nEnter the value : ";
    cin>>m;
    cout<<"Enter the power of this value : ";
    cin>>n;
    
    //method overloading
    ans1 = power(m,n); //calling first method
    ans2 = power((int)m,n); //calling second method
    
    if (n<0)
        ans = 1/ans;
    
    cout<<"\nCalling function 1(double m): "<<m<<" ^ "<<n<<" = ";
    printf("%.8f",ans1);
    cout<<"\n\nCalling function 2(int m): "<<m<<" ^ "<<n<<" = "<<ans2;
    return 0;
}

//suppose user have entered 3.23288 for value of m
//then first function will give more accurate answer than second function
//because second function takes int argument which convert 3.23288 into 3