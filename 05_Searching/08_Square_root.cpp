#include<iostream>
using namespace std;

// Naive Code: Linear Search
// Time: 0(√x)
// Space: O(1)
int getSquareRoot1(int x)
{
    for(int i=1; i<x; i++)
        if(i*i>x)   
            return i-1;
}

// Efficient Code: Using Binary Search 
// Time: O(log(n))
// Aux Space: O(1)
int getSquareRoot2(int x)
{
    int low=1;
    int high=x;
    int ans=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        int msqu = mid*mid;

        if(msqu==x)
            return mid;
        else if(msqu > x)
            high=mid-1;
        else 
        {
            low=mid+1;
            ans=mid;
        }  
    }
    return ans;
}

int main()
{
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    cout<<getSquareRoot1(x)<<endl; // Naive Code
    cout<<getSquareRoot2(x)<<endl; // Efficient code
    return 0;
}
