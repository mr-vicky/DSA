#include<iostream>
using namespace std;

// Naive solution
// Time: O(n^2)
// Space: O(1);
int Maximum_consective_ones(int arr[], int n)
{
    int res=0; 
    for(int i=0; i<n; i++)
    {
        int count=0;
        for(int j=i; j<n; j++)
        {
            if(arr[j]==1)
                count++;
            else break;
        }
        
        res=max(res, count);
    }
    return res;
}

// Efficient Solution
// Time: O(n)
// Space: O(1)
int OMaximum_consective_ones(int arr[], int n)
{
    int res=0, curr=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            curr=0;
        }
        else
        {
            curr++;
            res=max(res, curr);
        }
    }
    return res;
}

int main()
{
    int n=9;
    int arr[n]={0, 1, 1, 0, 1, 0};

    cout<<Maximum_consective_ones(arr, n)<<endl;
    cout<<OMaximum_consective_ones(arr, n)<<endl;

    return 0;
}
