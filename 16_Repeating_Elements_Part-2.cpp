#include<iostream>
using namespace std;
// solution works only if constraints are :  1 <= arr[i] <= n-1

// TC: O(n)
// SC: O(1)
int repeatingElement(int arr[], int n)
{
    int slow=arr[0], fast=arr[0];

    do{
        slow = arr[slow];
        fast = arr[arr[fast]];
    }while(slow != fast);

    slow = arr[0];

    while(slow != fast)
    {
        slow = arr[slow];
        fast = arr[fast];
    }
    return slow;
}

int main()
{
    int n = 8;
    int arr[n]={1,3,2,4,6,5,7,2}; 
    
    cout<<repeatingElement(arr, n);
    return 0;
}