#include<iostream>
using namespace std;


int linearSearch(int arr[],int n, int x);

int main()
{
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int arr[n];

    for(int i= 0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the value you want to seach: "<<endl;
    int x;
    cin>>x;

    cout<<linearSearch(arr,n, x);

    return 0;
}

int linearSearch(int arr[],int n, int x)
{
    for(int i = 0; i<n; i++)
    {
       if(arr[i]==x)
       {
            return i;
       }
    }
    return -1;
}