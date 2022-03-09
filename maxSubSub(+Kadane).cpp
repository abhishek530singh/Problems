#include<bits/stdc++.h>
using namespace std;
int main()

//basic approach takes n^2 time complexity
/*{

    int n;cin>>n;
    int a[n];for(int i=0;i<n;i++)cin>>a[i];
    int maxi=INT_MIN;
    for (int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=a[j];
            maxi=max(maxi,sum);
        }
    }
    cout<<maxi;
}*/

//Kadane Algo -:
// if current sum of array is negative then make current sum as '0' 
//because on add with negative num it always decrease sum...

//kadane algo takes O(N) time complexity

{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];

    int currentsum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        currentsum+=a[i];
        if (currentsum<0)
        {
            currentsum=0;
        }
        maxsum=max(maxsum,currentsum);
    }

    cout<<maxsum<<endl;
}
