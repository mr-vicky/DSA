#include<iostream>
#include<algorithm>
using namespace std;

// Selection Sort:
// TC: O(n*n)
// SC: O(n)
void SelectionSort1(int arr[], int n)
{
    const int INF = 2147483647; // Greatest Value
    int temp[n];
    for(int i=0; i<n; i++)
    {
        int min_ind = 0;
        for(int j=0; j<n; j++)
        {
            if(arr[j]<arr[min_ind])
            {
                min_ind = j;
            }
        }
        temp[i]=arr[min_ind];
        arr[min_ind] = INF;
    }

    for(int i=0; i<n; i++)
        arr[i]=temp[i];
}

// Optimized Selection Sort
// TC: O(n^2)
// SC: O(1)
void SelectionSort2(int arr[], int n)
{
    int min_ind = 0;
    for(int i=0; i<n; i++)
    {
        min_ind = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[min_ind])
            {
                min_ind=j;
            }
        }
        swap(arr[i], arr[min_ind]);
    }
}

int main()
{
    int n = 6;
    int arr[n]={10,5,8,20,2,18};

    cout<<"Array Before Sorting:\n";
    for(auto x: arr) cout<<x<<" ";

    // Selection Sort:
    SelectionSort1(arr, n);

    // Optimised Selection Sort
    SelectionSort2(arr, n);

    cout<<"\nArray after Sorting:\n";
    for(auto x: arr) cout<<x<<" ";
    return 0;
}
