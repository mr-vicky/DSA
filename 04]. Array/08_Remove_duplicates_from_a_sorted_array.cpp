#include<iostream>
using namespace std;

// Naive Method : 
// Time: O(n)
// Space: O(n)
int removeDuplicates(int arr[], int n)
{
    int temp[n];
    temp[0]=arr[0];
    int res=1;

    for(int i=1; i<n; i++)
    {
        if(temp[res-1] != arr[i])
        {
            temp[res]=arr[i];
            res++;
        }
    }

    for(int i=0; i<n; i++)
    {
        arr[i]=temp[i];
    }

    return res;
}

// Efficient Method : 
// Time : O(n)
// Space : O(1) 
int OremoveDuplicates(int arr[], int n)
{
    int res=1;
    for(int i=0; i<n; i++)
    {
        if(arr[res-1]!=arr[i])
        {
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
}

int main()
{
    int arr[5]={1, 2, 2, 3, 4};
    int n=5;
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    cout<<"Naive Method :\n";
    n=removeDuplicates( arr, n);
   
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    cout<<"Efficient Method :\n";
    int m=0;
    m=OremoveDuplicates( arr, n);

    for(int i=0; i<m; i++)
        cout<<arr[i]<<" ";
    return 0;
}