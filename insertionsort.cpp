// C++ program for insertion sort

#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter no. of elements there must be in array - ";
    int store,n,i,j;
    cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
	    cout<<"Enter the "<<i+1<<" Element - ";
	    cin>>arr[i];
	}
	for(i=1;i<n;i++){
	    j=i-1;
	    store=arr[i];
	    while(j>=0 && arr[j]>store){
	        arr[j+1]=arr[j];
	        j--;
	    }
	    arr[j+1]=store;
	}
	cout<<endl<<"Sorted Array"<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
	

	return 0;
}
