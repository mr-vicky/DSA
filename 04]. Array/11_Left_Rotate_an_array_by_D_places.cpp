#include<iostream>
using namespace std;

// // Naive Solution: 
// // Time: O(n*d)
// // Space: O(1)
void leftRotateOne(int arr[], int n)
{
    int temp=arr[0];
    for(int i=0; i<n; i++)
        arr[i]=arr[i+1];

    arr[n-1]=temp;
}

void leftRotate1(int arr[], int n, int d)
{
    for(int i=0; i<d; i++)
        leftRotateOne(arr, n);
}

// Solution: 2 | Efficient method
// Time: O(n)
// Space: O(d)
void  leftRotate2(int arr[],int n,int d)
{
    int temp[d];

    for(int i=0; i<d; i++)
        temp[i]=arr[i];

    for(int i=d; i<n; i++)
        arr[i-d]=arr[i];

    for(int i=0; i<d; i++)
        arr[n-d+i]=temp[i];
    
}

// Solution: 3 | Most Efficent
// Time: O(n)
// Space: O(1)
void reverse(int arr[], int low, int high)
{
    while(low<high)
    {
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
}

void leftRotate3(int arr[], int n, int d)
{
   reverse(arr, 0, d-1);
   reverse(arr, d, n-1);
   reverse(arr, 0, n-1);
}

int main()
{

    int arr[5]={1, 2, 3, 4, 5};
    int n=5;
    int d=3;

    for(int x: arr)
        cout<<x<<" ";
    cout<<endl;

    //NOTE: Run one Solution at a time 

    // cout<<"Solution 1: "<<endl;
    // leftRotate1(arr, n, d);

    // for(int x: arr)
    //     cout<<x<<" ";
    // cout<<endl;

    // cout<<"Solution 2: "<<endl;
    // leftRotate2(arr, n, d);

    // for(int x: arr)
    //     cout<<x<<" ";
    // cout<<endl;

    cout<<"Solution 3: "<<endl;
    leftRotate3(arr, n, d);

    for(int x: arr)
        cout<<x<<" ";
    cout<<endl;

    return 0;
}