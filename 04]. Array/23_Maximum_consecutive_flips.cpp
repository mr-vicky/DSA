#include<iostream>
using namespace std;

// Time: O(n)
// Space: O(1)
void printGroups(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        if(arr[i]!=arr[i-1])
        {
            if(arr[i]!=arr[0])
            {
                cout<<"From "<<i<<" to ";
            }
            else 
            {
                cout<<(i-1)<<endl;
            }
        }
    }

    if(arr[n-1]!=arr[0])
        cout<<(n-1)<<endl;
}

int main()
{
    int n=8;
    int arr[n]={0, 1, 0, 1, 0, 1, 1 , 0};
    
    printGroups(arr, n);
    cout<<endl;
    return 0;
}
