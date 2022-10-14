#include<bits/stdc++.h>
using namespace std;

int partitionArray(int a[], int left, int right)
{
    int pivot = a[left];
    int start = left, end = right;
    while (start < end)
    {
        while (a[start] <= pivot)
        {
            start++;
        }
        while (a[end] > pivot)
        {
            end--;
        }
        if(start < end)
        {
            swap(a[start], a[end]);
        }
        
    }
    swap(a[left], a[end]);
    return end;
}

void quicksort(int a[], int left, int right)
{
    if(left < right)
    {
        int loc = partitionArray(a, left, right);
        quicksort(a, left, loc-1);
        quicksort(a, loc + 1, right);
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

    quicksort(a,0,n-1);

    cout<<"Sorted array"<<endl;
    for(int i=0; i<n; i++) cout<<a[i]<<" ";


    return 0;
}