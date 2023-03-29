/*
Problem : Partition a given array
I/P: arr[]=[3,8,6,12,10,7], p=5;
O/P: [3,6,7,8,12,10]
            OR
     [6,3,7,12,8,10]
            . 
            .
*/ 

#include<iostream>
#include<algorithm>
using namespace std;

// MySolution
// TC: O(n*log(n))
// SC: O(1)
void partition1(int arr[], int n, int p)
{
    sort(arr, arr+n);
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

// Naive Method:
// TC: O(n)
// SC: O(n)
void partition2(int arr[], int l, int h, int p)
{
    int temp[h-l+1];
    int index = 0;

    for(int i=l; i<h; i++)
    {
        if(arr[i]<=arr[p])
        {
            temp[index]=arr[i];
            index++;
        }
    }

    for(int i=l; i<h; i++)
    {
        if(arr[i]>arr[p])
        {
            temp[index]=arr[i];
            index++;
        }
    }

    for(int i=0; i<h; i++) cout<<arr[i]<<" ";
}

int main()
{
    int n = 6;
    int arr[]={3,8,6,12,10,7};
    int p = 5;

    partition1(arr, n, p);

    int l=0, h=6; p=5;
    partition2(arr, l, h, p);
    
    return 0;
}
