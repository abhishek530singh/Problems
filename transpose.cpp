#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    
    //printing before transpose
    cout<<"Original array is "<<endl;
    for(int i=0 ;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }cout<<"\n";
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<=i;j++)
        {
            int temp;
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }

    //After transport
    cout<<"\nAfter transpose array is \n"<<endl;
    for(int i=0 ;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

}