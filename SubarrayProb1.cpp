// find the sum of all possible subarray

#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter number of element in array : ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter array : ";
    for(int i=0;i<n;i++)cin>>arr[i];
    
    for (int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            cout<<sum<< " ";
            
        }
    }
    
}