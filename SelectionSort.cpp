#include<bits/stdc++.h>
using namespace std;

int* SelSort(int ar[],int size)
{
    for (int i=0;i<size;i++)
    {
        int mini=ar[i];
        int index=i;
        for (int j=i+1;j<size;j++)
        {
            if (ar[j]<mini) {mini=ar[j] ; index=j;}
        }
        if (mini!=ar[i])
        {
            int temp;
            temp=ar[i];
            ar[i]=ar[index];
            ar[index]=temp;
        }
    }
    return ar;
}


int main()
{
    cout<<"Enter the number of element in the array ";
    int size;
    cin>>size;
    int arr[size];
    for (int i=0;i<size;i++)cin>>arr[i];
    int * ar=SelSort(arr,size);
    for (int i=0;i<size;i++)cout<<ar[i]<<" ";
}