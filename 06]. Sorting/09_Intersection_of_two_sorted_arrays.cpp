/*
Problem: Intersection of two sorted arrays
I/P:  a[m]={3,5,10,10,10,15,15,20}, b[n]={5,10,10,15,30}
O/P: {5,10,15}
*/ 
#include<iostream>
using namespace std;

// Naive Method: 
// TC: O(n*m)
// SC: O(1)
void getIntersection1(int a[], int m, int b[], int n)
{   
    for(int i=0; i<m; i++)
    {
        if(i>0 && a[i]==a[i-1])
            continue;
        for(int j=0; j<n; j++)
        {
            if(a[i]==b[j])
            {
               cout<<a[i]<<" ";
               break;
            }
        }
    }
    
}

// Efficient Method: 
// TC: O(m+n)
// SC: O(1)
void getIntersection2(int a[], int m, int b[], int n)
{
    int i=0, j=0;
    while(i<m && j<n)
    {
        if(i>0 && a[i]==a[i-1])
        {
            i++;
            continue;
        }
        
        if(a[i]<b[j])
            i++;
        else if(a[i]>b[j])
            j++;
        else if(a[i]==b[j])
        {
            cout<<a[i]<<" ";
            i++;
            j++;
        }
    }
}

int main()
{
    int m = 8;
    int n = 5;
    int a[m]={3,5,10,10,10,15,15,20};
    int b[n]={5,10,10,15,30};

    // Naive Method:
    cout<<"Naive Method:\n";
    getIntersection1(a, m, b, n);
    cout<<endl;

    cout<<"Efficient Method:\n";
    // Efficient Method:
    getIntersection2(a, m, b, n);
    cout<<endl;
    return 0;
}
