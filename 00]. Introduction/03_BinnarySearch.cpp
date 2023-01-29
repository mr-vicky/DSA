#include<iostream>
using namespace std;


int binnarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n;
    while(s <= n)
    {
        int mid = (s+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            e = mid-1;
        }
        else{
            s = mid+1;
        }

        cout<<"mid: "<<mid<<endl;
    
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    int key;
    cin>>key;

    int result =binnarySearch(arr, n, key);
    cout<<"Result: "<<result<<endl;
    return 0;
}