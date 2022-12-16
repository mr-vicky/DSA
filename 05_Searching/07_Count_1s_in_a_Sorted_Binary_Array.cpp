#include<iostream>
using namespace std;

// Naive solution
// Time: 0(n)
// Aux Space: O(1)
int countOnes1(int arr[], int n)
{
    int count=0;
    for(int i=0; i<n; i++)
        if(arr[i]==1)
            count++;
    return count;
}

// Efficient Solution
// Time: O(log(n))
// Aux Space: O(1)
int countOnes2(int arr[], int n)
{
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;

        if(arr[mid]==0)
            low=mid+1;
        else 
        {
            if(mid==0 || arr[mid-1]==0)
                return (n-mid);
            else 
                high=mid-1;
        }       
    }
    return -1;
}


int main()
{
    int n=7;
    int arr[n]{0, 0, 0, 1, 1, 1, 1};

    cout<<countOnes1(arr, n)<<endl;
    cout<<countOnes2(arr, n)<<endl;
    return 0;
}
