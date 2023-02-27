// Two pointer approach works only when the array is sorted it takes TC: O(n)
// if the array is not sorted then firstly sort the array and it will take the TC: n(log(n)) 
#include<iostream>
using namespace std;

// Naive Method:
// TC: O(n*n)
// SC: O(1)
bool isPair1(int arr[], int n, int x){
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if(arr[i]+arr[j]==x)
                return true;
    return false;
}

// Efficient Method:
// TC: O(n)
// SC: O(1)
bool isPair2(int arr[], int n, int x){
    int i=0;
    int j = n-1;
    while(i<j)
    {
        if(arr[i]+arr[j]==x)
            return true;
        else if(arr[i]+arr[j]<x)
            i++;
        else 
            j--;
    }
    return false;
}

int main()
{
    int arr[]={2, 5, 8, 12, 20};
    int n = 5;
    int x = 17;

    cout<<isPair1(arr, n, x)<<endl;
    cout<<isPair2(arr, n, x)<<endl;
    return 0;
}