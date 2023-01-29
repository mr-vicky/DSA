#include<iostream>
using namespace std;

int getLargest(int arr[], int n)
{
    int res=0;
    for(int i=1; i<n; i++)
    {
        if(arr[i]>arr[res])
            res=i;
    }
    return res;
}

int main()
{
    int arr[5]={9, 5, 3, 10, 2};
    int n=5;
    cout<<getLargest(arr, n);
    return 0;
}