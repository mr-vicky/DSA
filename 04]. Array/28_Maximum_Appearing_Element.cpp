#include<iostream>
using namespace std;

// Constraints--> 
// 0<=left[i]<=right[i]<=100
// 0<=i<=10^5

// Naive method: 
// Time: O(n*max) where max=100
// Aux Space: O(max)
int maxAppear1(int left[], int right[], int n)
{
    int freq[100]={0};
    for(int i=0; i<n; i++)
    {
        for(int j=left[i]; j<=right[i]; j++)
            freq[j]+=1;
    }
    int res=0;
    for(int i=0; i<100; i++)
    {
        if(freq[i]>freq[res])
            res=i;
    }
    return res;
}

// Efficient Method : By using Prefix sum technique
// Time: O(n+max) where max=100
// Aux Space: O(max+1)
int maxAppear2(int left[], int right[], int n)
{
    int freq[101]={0};
    for(int i=0; i<n; i++)
    {
        freq[left[i]]++;
        freq[right[i]+1]--;
    }
    for(int i=0; i<100; i++)
    {
        freq[i]+=freq[i-1];
    }
    int res=0;

    for(int i=0; i<100; i++)
        if(freq[i]>freq[res])
            res=i;

    return res;
}

int main()
{
    int n=3;
    int left[]={1, 2, 4};
    int right[]={4, 5, 7};

    cout<<maxAppear1(left, right, n)<<endl;
    cout<<maxAppear2(left, right, n)<<endl;
    return 0;
}