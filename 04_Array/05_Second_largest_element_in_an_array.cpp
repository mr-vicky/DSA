#include<iostream>
using namespace std;

int getLargest(int arr[], int n)
{
    int largest=0;
    for(int i=1; i<n; i++)
    {
        if(arr[i]>arr[largest])
        {
            largest=i;
        }
    }
    return largest;
}

int secondLargest(int arr[], int n)
{
    int largest = getLargest(arr, n);
    int res=-1;

    for(int i=0; i<n; i++)
    {
        if(arr[i]!=arr[largest])
        {
            if(res==-1)
                res=i;
            else if(arr[i]>arr[res])
                res=i;
        }
    }
    return res;
}

int main()
{
    int arr[5]={5, 45, 52, 42, 10};
    int n=5;
    cout<<secondLargest(arr, n);
    return 0;
}