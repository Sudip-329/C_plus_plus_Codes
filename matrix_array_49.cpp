//Printig matrix;
#include<iostream>
using namespace std;
int main()
{
    int row,col,i,j;
    cout << "Enter row and col : ";
    cin>> row>> col;
    int arr[row][col];
    cout << "Enter values for row and col : "<< endl;
    for(i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            cout <<" Array ["<<i<<"]"<<"["<<j<<"] =" ;
            cin>>arr[i][j];
        }
    }
    cout << "The matrix is : "<<endl;
    for(i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout << endl;
    }
}