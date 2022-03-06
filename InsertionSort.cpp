#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the number of element in array ";
    int n;
    cin>>n;
    int ar[n];
    for (int i=0;i<n;i++)cin>>ar[i];

    cout<<"Before sorting array is ";
    for(int i=0;i<n;i++)cout<<ar[i]<<" ";

    // Insertion sort logic
    for (int i=1;i<n;i++)
    {
        int key=ar[i];
        int j=i-1;
        while(j>=0 && ar[j]>key)
        {
           
            
                ar[j+1]=ar[j];
                j--;
            
        }
        ar[j+1]=key;

    }
    cout<<endl<<"The array after sorting is ";
    for (int i=0;i<n;i++)cout<<ar[i]<<" ";
}