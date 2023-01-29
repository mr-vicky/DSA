#include<iostream>
using namespace std;

// Naive Method:
// Time: O(n^2)
// Space: O(1)
int maximum_Length1(int arr[], int n)
{
    int res=1;
    for(int i=0; i<n; i++)
    {
        int curr=1;
        for(int j=i+1; j<n; j++)
        {
            if((arr[j]%2==0 && arr[j-1]%2!=0) || (arr[j-1]%2==0 && arr[j]%2!=0))
                curr++;
            else 
                break;
        }
        res=max(res, curr);
    }

    return res;
}

// Efficient Method:
// Time: O(n)
// Space: O(1)
int maximum_Length2(int arr[], int n)
{
    int res=1;
    int curr=1;
    
    for(int i=1; i<n; i++)
    {
        if((arr[i]%2==0 && arr[i-1]%2!=0)|| (arr[i-1]%2==0 && arr[i]%2!=0))
        {
            curr++;
            res = max(res, curr);
        }
        else 
            curr=1;
    }
    
    return res;
}

int main()
{
    int n=11;
    int arr[n]={10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    cout<<maximum_Length1(arr, n)<<endl;
    cout<<maximum_Length2(arr, n)<<endl;

    return 0;
}
