#include<bits/stdc++.h>
using namespace std;

int * BubbleSort(int arr[],int size)
{
    for (int i=0;i<size;i++)
    {
        bool swapped=false;
        for(int j=0;j<(size-i-1);j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped=true;
                

            }
        }if (swapped==false) return arr;
    }
    return arr;
}



int main()
{

    cout<<"Enter number of elements in array ";
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)cin>>arr[i];
    cout<<"Before sorting the array is ";
    for (int i=0;i<size;i++)cout<<arr[i]<<" ";
    int *x=BubbleSort(arr,size);
    cout<<endl<<"After sorting array is ";
    for (int i=0;i<size;i++)cout<<x[i]<<" ";




}