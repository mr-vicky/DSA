#include<iostream>
#include<algorithm>
using namespace std;

// Naive Method:
// TC: O(n^2)
// SC: O(1)
void BubbleSort1(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
        for(int j=0; j<n-i-1; j++)
            if(arr[j]>arr[j+1])
                swap(arr[j], arr[j+1]);
}


// Optimized Bubble Sort : 
// If the array is sorted in middle 
void BubbleSort2(int arr[], int n)
{
    bool isSwapped;
    for(int i=0; i<n-1; i++)
    {
        isSwapped = false;
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                isSwapped = true;
            }
        }

        if(isSwapped == false)
            break;
    }
}

int main()
{
    int n = 4;
    int arr[n]={2, 10, 8, 7};
    cout<<"Array before Sorting : "<<endl;
    for(auto x: arr)
        cout<<x<<" ";

    // Naive Method :
    BubbleSort1(arr, n);

    // Optimized Bubble Sort : 
    BubbleSort2(arr, n);

    cout<<"\nArray after Sorting by using Bubble sort: "<<endl;
    for(auto x: arr)
        cout<<x<<" ";
    return 0;
}
