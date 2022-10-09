#include<iostream>
using namespace std;

int main()
{
    cout<<"\n\nEnter N";
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter elements ";
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    cout<<"Sorted Arrary is:\n";
    for(int i=0; i<n;i++) cout<<a[i]<<" ";

    cout<<"\n\n";
    return 0;
}