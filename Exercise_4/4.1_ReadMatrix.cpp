/*

*/

#ifdef _WIN32
#include<iostream.h>
#endif

#ifdef linux
#include<iostream>
#endif

using std::cout;
using std::cin;

int main()
{
    int row, column;

    cout<<"\nEnter the total no of rows of matrix : ";
    cin>>row;
    cout<<"\nEnter the total no of column of matrix : ";
    cin>>column;

    //matrix of row*column
    int m[row][column];

    //read all values from keyboard and store in array
    cout<<"\nEnter the elements of matrix according to row wise :\n ";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<"Enter the no : ";
            cin>>m[i][j];
        }
    }
    return 0;
}