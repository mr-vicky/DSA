/*
Problem: Merge two sorted arrays :
I/P: a[n1]={10,15,20}, b[n2]={5,20,22,50}
O/P: [5,10,15,20,20,22,50]
*/ 

#include<iostream>
#include<algorithm>
using namespace std;

// Naive Method:
// TC: O((n1+n2)*log(n1+n2))
// SC: O(n1+n2)
void merge1(int a[], int b[], int n1, int n2)
{
    int c[n1+n2];
    for(int i=0; i<n1; i++)
        c[i]=a[i];
    for(int i=0; i<n2; i++)
        c[n1+i]=b[i];
    
    sort(c, c+n1+n2);

    cout<<"By Naive Method:\n";
    for(auto x: c) cout<<x<<" ";
    cout<<endl;
}

// Efficient Method: 
// TC: 0(n1+n2)
// SC: 0(n1+n2)
void merge2(int a[], int b[], int n1, int n2)
{
    int arr[n1+n2];
    // Standerd Merge Logic:
    int i=0, j=0, k=0;
    while(i<n1 && j<n2)
    {
        if(a[i]<=b[j])
            arr[k++]=a[i++];
        else 
            arr[k++]=b[j++];
    }
    while(i<n1)
        arr[k++]=a[i++];
    while(j<n2)
        arr[k++]=b[j++];

    cout<<"By Efficient Method:\n";
    for(auto x: arr)
        cout<<x<<" ";
}

int main()
{
    int n1 = 3;
    int n2 = 4;
    // Here a[] and b[] must be sorted arrays 
    int a[n1]={10,15,20};
    int b[n2]={5,20,22,50};

    // Naive Method
    merge1(a, b, n1, n2);
    // Efficient Method
    merge2(a, b, n1, n2);
    return 0;
}
