// Write a function that receives two matrix objects as arguments and returns
// a new matrix object containing their multiplication result.

#ifdef _WIN32
#include<iostream.h>
#endif

#ifdef linux
#include<iostream>
#endif

#include<stdlib.h>
using namespace std;

class matrix
{
    // Here we have taken fix values of matrix dimension(3*3) but if you want
    // perform function on different dimensional matrices then you should
    // first get the values of matrix dimension from user.
    // NOTE: if you get the values of matrix dimensions from user then
    // you must check validation/rules to perform matrix maltiplication
    int m[4][4];

public:
    void get(void);
    void put(void);
    friend matrix multiplication(matrix &,matrix &);
};

void matrix::get()
{
    cout<<"\nEnter the all elements of matrix : \n";
    for(int i=1;i<4;i++)
    {
        for(int j=1;j<4;j++)
        {
            cout<<"Enter the value of m[" <<i<< "][" <<j<< "]" << " : "; //changed
            cin>>m[i][j];
        }
    }
}
void matrix::put()
{
    cout<<"\nMatrix : \n";
    for(int i=1;i<4;i++)
    {
        for(int j=1;j<4;j++)
        {
            cout<<" m["<<i<<"]["<<j<<"] = "<<m[i][j]<<"\t";
        }
        cout<<"\n";
    }
}

matrix multiplication(matrix & m1,matrix & m2)
{
    matrix m3;
    int a;
    for(int k=1;k<4;k++)
    {
        for(int j=1;j<4;j++)
        {
            a=0;
            for(int i=1;i<4;i++)
            {
              a = a + m1.m[k][i]*m2.m[i][j];
            }
            m3.m[k][j]=a;
        }
    }
    return m3;
}

int main()
{
    matrix a,b,c;
    cout<<"\nFirst matrix :";
    a.get();
    cout<<"\nSecond matrix :";
    b.get();
    cout<<"\nMatrices are :";
    a.put();
    b.put();
    c=multiplication(a,b);
    cout<<"\nMultiplication of two matrix is :\n";
    c.put();
    return 0;

}