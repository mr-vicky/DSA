#include<iostream>
using namespace std;

// Time: θ(n)
// Space: O(1)
void getFrequencies(int arr[], int n)
{
    int freq=1, i=1;
    while(i<n)
    {
        while(i<n && arr[i]==arr[i-1])
        {
            freq++;
            i++;
        }
        cout<<arr[i-1]<<" "<<freq<<endl;
        i++;
        freq=1;
    }

    if(n==1 || arr[n-1]!=arr[n-2])
        cout<<arr[n-1]<<" "<<1;
}

int main()
{
    int arr[7]={40, 50, 50, 60, 60, 60, 100};
    int n=7;

    getFrequencies(arr, n);

    return 0;
}