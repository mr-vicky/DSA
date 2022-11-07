#include<iostream>
using namespace std;

// Efficient Solution
// Time: O(n)
// Space: O(1)
int getProfit(int arr[], int n)
{
    int profit=0;

    for(int i=1; i<n; i++)
    {
        if(arr[i]>arr[i-1])
        {
            profit+=(arr[i]-arr[i-1]);
        }
    }

    return profit;
}


int main()
{
    int price[5]={1, 5, 3, 8, 12};
    int n=5;

    cout<<getProfit(price, n);
    return 0;
}