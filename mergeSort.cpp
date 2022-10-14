#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int low, int mid, int high)
{
    int b[high+1];
    int i=low, j=mid+1, k=0;
    while (i<=mid && j<=high)
    {
        if(a[i] < a[j])
        b[k++] = a[i++];
        else
        b[k++] = a[j++];
    }
    while (i<=mid)
    {
        b[k++] = a[i++];
    }
    while (j<=high)
    {
        b[k++] = a[j++];
    }
    
    k = 0;
    for(int i=low; i<=high; i++)
    a[i] = b[k++];
}

void mergeSort(int a[], int low, int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        mergeSort(a,low, mid);
        mergeSort(a,mid+1, high);
        merge(a,low, mid, high);
    }
}

int main()
{
    int n;
    cout<<"Enter size of array\n";
    cin>>n;
    int a[n];
    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++) cin>>a[i];

    mergeSort(a,0,n-1);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}