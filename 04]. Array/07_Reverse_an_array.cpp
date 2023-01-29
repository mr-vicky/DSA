#include<iostream>
using namespace std;


void reverse(int arr[], int n)
{
    int low=0, high=n-1;

    while(low<high)
    {
        int temp = arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
}

int main()
{
    int arr[5]={1, 2, 3, 4, 5};
    int n=5;
    
    for(int x : arr)
        cout<<x<<" ";

    cout<<endl;
    reverse(arr, n);

    for(int x : arr)
        cout<<x<<" ";

    return 0;
}