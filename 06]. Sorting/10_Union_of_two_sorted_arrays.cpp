/*
Problem : Union of two sorted arrays
I/P: a[]={3,5,8,}, b[]={2,8,9,10,15}
O/P: {2,3,5,8,9,10,15}
*/ 

#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

// Solution 1: 
// TC: O(m+n)
// SC: O(1)
void getUnion1(int a[], int m, int b[], int n)
{
    set<int>s;
    for(int i=0; i<m; i++)
        s.insert(a[i]);
    for(int i=0; i<n; i++)
        s.insert(b[i]);

    for(auto x: s)  cout<<x<<" ";
}

// Solution 2: Naive Method
// TC: O((m+n)*log(m+n))
// SC: O(m+n)
void getUnion2(int a[], int m, int b[], int n)
{
    int c[m+n];
    for(int i=0; i<m; i++)
        c[i]=a[i];
    for(int i=0; i<n; i++)
        c[m+i]=b[i];
    
    sort(c, c+m+n);

    for(int i=0; i<m+n; i++)
    {
        if(i==0 || c[i]!=c[i-1])
            cout<<c[i]<<" ";
    }
}

// Solution 3: Efficient Method 
// TC: O(m+n)
// SC: O(1)
void getUnion3(int a[], int m, int b[], int n)
{
    // Standard Merge Function Logic:
    int i=0, j=0;
    int count=0;
    while(i<m && j<n)
    {
        if(i>0 && b[j]==b[j-1])
        {
            i++;
            continue;
        }

        if(j>0 && b[j]==b[j-1])
        {
            j++;
            continue;
        } 

        if(a[i]<b[j])
        {
            cout<<a[i++]<<" ";
        }
        else if(a[i]>b[j])
        {
            cout<<b[j++]<<" ";
        }
        else if(a[i]==b[j])
        {
            cout<<a[i++]<<" ";
            i++;
            j++;
        }
    }
    while(i<m)
    {
        if(i>0 && a[i]!=a[i-1])
        {
            cout<<a[i]<<" ";
            i++;    
        }
    }
    while(j<n)
    {
        if(j>0 && b[j]!=b[j-1])
        {
            cout<<b[j]<<" ";
            j++;
        }
    }
}

int main()
{
    int m = 3;
    int n = 5;
    int a[]={3,5,8,};
    int b[]={2,8,9,10,15};
    
    cout<<"Solution 1: MySolution\n";
    getUnion1(a, m, b, n);
    cout<<endl;

    cout<<"Solution 2: Naive Method\n";
    getUnion2(a, m, b, n);
    cout<<endl;

    cout<<"Solution 3: Efficient Method :\n";
    getUnion3(a, m, b, n);
    cout<<endl;
    return 0;
}
