/*
    Find the sin(x),cos(x),and sum(x)
    sin(x) = x - x^3/3! + x^5/5! ..
    cos(x) = 1 - x^2/2! + x^4/4!...
    sum(x) = 1 + (1/2)^2 + (1/3)^3 + (1/4)^4 +..
*/

#ifdef _WIN32
#include<iostream.h>
#include<cmath.h>
#endif

#ifdef linux
#include<iostream>
#include<cmath>
#endif

#include<stdlib.h>

//set fix value of PIE and MAX
#define PIE 3.141592654
#define MAX 15

using std::cout;
using std::cin;

//to perform factorial function
int fact(int i)
{
    int f;

    //base condition and result for recursive function
    if(i <= 1)
    {
        return 1;
    }
    //recursive formula
    f=i*fact(i-1);
    return f;
}

//to perform SUM function
double sum()
{
    double sumx = 0;
    for(int i=1;i<=MAX;i++)
    {
        sumx = sumx + pow((float)1/i,i);
        cout<<"\n"<<sumx;
    }
    return sumx;
}

//to find cos(x)
//you can also use inbuilt cos() function
//instead of this-cosx() user defined function
double cosx(float value)
{
    double cosine = 0;
    int temp;
    for(int i=0;i<MAX;i++)
    {
        temp = 2*i;
        cosine = cosine + (pow(-1,i)*pow(value,temp))/fact(temp);
    }
    return cosine;
}

//to find sin(x)
//you can also use inbuilt sin() function 
//instead of this-sinx() user defined function
double sinx(float value)
{
    double sine = 0;
    int temp;
    for(int i=0;i<MAX;i++)
    {
        temp = 2*i + 1;
        sine = sine + (pow(-1,i)*pow(value,temp))/fact(temp);
    }
    return sine;
}

int main()
{
    int choice;
    float no;
    do
    {
        cout<<"\nChoose any option ";
        cout<<"\n1.Sin(x)\n2.Cos(x)\n3.sum\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"\nEnter the value of x in radian : ";
                cin>>no;
                //to use inbuilt sin() function uncomment next line
                //cout<<"\n"<<sin(no);
                cout<<"\nValue of sin( "<<no<<" ) = "<<sinx(no);
                break;
            case 2:
                cout<<"\nEnter the value of x in radian : ";
                cin>>no;
                //to use inbuilt cos() function uncomment next line
                //cout<<"\nAns should be "<<cos(no);
                cout<<"\nValue of cos( "<<no<<" ) = "<<cosx(no);
                break;
            case 3:
                cout<<"\nValue of sum = "<<(double)sum();
                break;
            default:
                exit(0);
        }
    }while(true);
        return 0;
}