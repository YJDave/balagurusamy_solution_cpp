/*
    ..

*/

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float V,P,r;
    int n;
    cout<<"\nEnter principal amount   : ";
    cin>>P;
    cout<<"\nEnter Interest rate : ";
    cin>>r;
    cout<<"\nEnter time period in year : ";
    cin>>n;
    cout<<"\nYear\tPrincipal_Amount  Interest_Rate   Amount_At_The_End_of_year";
    
    for(int i=1;i<=n;i++)
    {
        //call inbuilt pow() function to perform x^y operations
        V = P * pow((1+r),i);
        cout<<"\n"<<i<<"\t"<<P<<"\t\t\t"<<r<<"\t\t\t"<<V;
        //on every next year value of principal amount will be same as V
        P=V;
    }
    return 0;
}