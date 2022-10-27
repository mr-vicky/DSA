#include<iostream>
using namespace std;

int deletion(int arr[], int n,  int x)
{
    int i;
    for(i=0; i<n; i++)
        if(arr[i]==x)   
            break;
        
    if(i==n) // if element is not present
        return n;

    for(int j=i; j<n-1; j++)
        arr[j]=arr[j+1];
    return n-1;
}

int main()
{
    int arr[5]={2, 4, 6, 8, 10};
    int n=5;
    int x=6; 

    cout<<"\nBefore Deletion: "<<"\n";
    for(int i=0; i<n; i++)
            cout<<arr[i]<<" ";

    n=deletion(arr, n, x);
    
    cout<<"\nAfter Deletion: "<<"\n";
    for(int i=0; i<n; i++)
            cout<<arr[i]<<" ";
    return 0;

}