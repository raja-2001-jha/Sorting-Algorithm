#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"\n\nEnter N"<<endl;
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter elements "<<endl;
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
    cout<<"Sorted Arrary is:\n";
    for(int i=0; i<n;i++) cout<<a[i]<<" ";

    cout<<"\n\n";
    return 0;
}