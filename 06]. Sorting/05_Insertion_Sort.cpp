/* Insertion Sort : 
    - This algorithm is IN-PLACE algorithm i.e. it takes O(1) space
    - This algorithm is Stable algorithm i.e if there are two same elements then thier original order will retained
    - Most popular and Efficient for small sized arrays
*/
#include<iostream>
using namespace std;

// Best TC: O(n)
// Worst TC: O(n^2)
// Average TC: O(n^2)
// SC: O(1)
void InsertionSort(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        int key = arr[i];
        int  j = i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main()
{
    int n = 4;
    int arr[n]{20, 10, 50, 30};

    cout<<"Array before Sorting: \n";
    for(auto x: arr)    
        cout<<x<<" ";

    InsertionSort(arr, n);

    cout<<"\nArray after Sorting: \n";
    for(auto x: arr)    
        cout<<x<<" ";

    return 0;
}
