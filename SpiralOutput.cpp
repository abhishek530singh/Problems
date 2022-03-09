/*
Spiral printing of two-D array
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for (int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    int row_start=0,col_start=0;
    int row_end=r-1;
    int col_end=c-1;

    while(row_end>=row_start && col_end>=col_start)
    {
        for (int col=col_start;col<=col_end;col++)
        {
            cout<<arr[row_start][col]<<" ";

        }cout<<endl;
        row_start++;

        for(int row=row_start;row<=row_end;row++)
        {
            cout<<arr[row][col_end]<<" ";
        }cout<<endl;
        col_end--;
        for (int col=col_end;col>=col_start;col--)
        {
            cout<<arr[row_end][col]<<" ";
        }cout<<endl;
        row_end--;
        for(int row=row_end;row>=row_start;row--)
        {
            cout<<arr[row][col_start]<<" ";

        }col_start++;
        cout<<endl;

    }
    return 0;
}