#include<iostream>

using std::cout;
using std::cin;

int main()
{
    int row, column;
    cout<<"\nEnter the total no of rows of matrix : ";
    cin>>row;
    cout<<"\nEnter the total no of column of matrix : ";
    cin>>column;

    //matrix memory allocation array of row*column
    int m[row][column];
    //store values which are entered by user in arrays
    cout<<"\nEnter the elements of matrix according to row wise :\n ";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<"Enter the no : ";
            cin>>m[i][j];
        }
    }

    //display matrix/array 
    cout<<"\nYour matrix is  : \n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<" m["<<i<<"]["<<j<<"] = "<<m[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}