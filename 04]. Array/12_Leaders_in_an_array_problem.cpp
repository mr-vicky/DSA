#include<iostream>
using namespace std;

// Naive Approach
// Time : O(n^2)
// space : O(n)
void leaders(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        bool flag=false;
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]<=arr[j])
            {
                flag=true;
                break;
            }
        }

        if(flag==false)
            cout<<arr[i]<<" ";
    }
}

// Efficient Approach
// Time: Θ(n)
// Space: O(1)
void Oleaders(int arr[], int n)
{
    int curr_lead = arr[n-1];
    cout<<curr_lead<<" ";

    for(int i=n-2; i>=0; i--)
    {
        if(arr[i]>curr_lead)
        {
            curr_lead=arr[i];
            cout<<curr_lead<<" ";
        }
    }
}

int main()
{
    int arr[7]={7, 10, 4, 10, 6, 5, 2};
    int n=7;

    leaders(arr, n);
    cout<<endl;
    Oleaders(arr, n);

    return 0;
} 