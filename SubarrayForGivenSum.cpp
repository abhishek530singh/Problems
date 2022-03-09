/*
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s;
    cin>>n>>s;
    int arr[n];
    for (int i=0;i<n;i++)cin>>arr[i];
    int currentSum=0,st=0,en=0,i=0,j=0;
    while (j<n && currentSum+arr[j]<=s )
    {
        currentSum+=arr[j];
        
        j++;

    }
    if (currentSum==s)
        {
            cout<<i+1<<" ";
            cout<<j<<endl;
            return 0;
        }
    while(j<n)
    {
        
        currentSum+=arr[j];
        while(currentSum>s)
        {
            currentSum-=arr[i];
            i++;
        }
        if (currentSum==s)
        {
            st=i+1;
            en=j+1;
            break;
        }
        
        j++;

    }
    cout<<st<<" "<<en<<endl;
 
}