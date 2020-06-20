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
#include<math.h>
using namespace std;

class table
{
    int n;
    float *d;
    int *f;
    float m,v,s;
public:
    void getdata(void);
    void putdata(void);
    void variance(void);
    void mean(void);
    void sta_deviation(void);
};

//method to find mean
void table::mean()
{
    m = 0;
    for(int i=0;i<n;i++)
    {
        m = m + d[i];
    }
    m = m/n;
}

//method to find variance of all table data
void table::variance()
{
    v = 0;
    for(int i=0;i<n;i++)
    {
        d[i] = d[i]-m;
        v = v+(d[i]*d[i]);
    }
    v = v/n;
}

//method to find standard deviation 
void table::sta_deviation()
{
    s = sqrt(v);
}

//method to store all data into table object
void table::getdata()
{
    cout<<"\nEnter the total no of data ";
    cin>>n;
    //dynamic memory allocation using pointer
    //array require total (size+1) space
    d = new float[n+1];
    f = new int[n+1];
    cout<<"\nEnter data into integer or float and frequency in integer ";
    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter the data : ";
        cin>>d[i];
        cout<<"Enter the frequency related to this data : ";
        cin>>f[i];
    }
    return ;
}

//method to show/print table class object
void table::putdata()
{
    cout<<"\nData       ";
    for(int i=0;i<n;i++)
    {
        cout<<d[i]<<"  ";
    }
    cout<<"\nFrequency ";
    for(int i=0;i<n;i++)
    {
        cout<<f[i]<<"  ";
    }
    //find mean, variance, standard deviation by calling class method
    mean();
    variance();
    sta_deviation();
    cout<<"\nParameters for this information : ";
    cout<<"\nMean = "<<m;
    cout<<"\nVariance = "<<v;
    cout<<"\nStandard Deviation = "<<s;
    return ;
}

int main()
{
    table t1;
    t1.getdata();
    t1.putdata();

    return 0;
}