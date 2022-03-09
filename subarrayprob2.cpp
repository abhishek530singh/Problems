/* Sarasvati has an array of array of N non-negatove integer. The i-th integer of the array is A[i].She
wants to choose a contiguous arithmetic subarray from her array that has the maximum length.Please help her 
to determine the length of the longest contiguous arithmetic subarray.
*/
//uncomplete

#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the number of element in array ";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int streak=2;
    int cd=arr[1]-arr[0];
    

}