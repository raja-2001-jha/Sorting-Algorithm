#include <bits/stdc++.h>
using namespace std;


void selectionSort(int arr[], int n)
{
    int i, j, minIdx;
    for (i = 0; i < n - 1; i++)
    {
        minIdx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[minIdx])
                minIdx = j;
        if (minIdx != i)
            swap(arr[minIdx], arr[i]);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter size of array\n";
    cin >> n;
    int a[n];
    cout << "Enter the elements\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    selectionSort(a, n);
    cout << "Sorted array: \n";
    printArray(a, n);
    return 0;
}