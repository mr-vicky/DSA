#include<iostream>
#include<algorithm>
using namespace std;

// Super Naive Method:
// TC: O(n*n)
// SC: O(1)
int isRepeated1(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            if(arr[i]==arr[j])
                return arr[i];
}

// Naive Method: 
// TC: O(n(log(n)))
// SC: O(1)
int isRepeated2(int arr[], int n)
{
    sort(arr, arr+n);

    for(int i=0; i<n-1; i++)
        if(arr[i]==arr[i+1])
            return arr[i];
}

// Efficient Method:
// TC: O(n)
// SC: O(n)
int isRepeated3(int arr[], int n)
{
    bool visited[n];
    for(int i=0; i<n; i++)
        visited[i]=false;

    for(int i=0; i<n; i++)
    {
        if(visited[arr[i]])
            return arr[i];
        visited[arr[i]]=true;
    }
}

int main()
{
    int n = 5;
    int arr[5]{0, 1, 2, 2, 3};

    cout<<isRepeated1(arr, n)<<endl;
    cout<<isRepeated2(arr, n)<<endl;
    cout<<isRepeated3(arr, n)<<endl;
    return 0;
}
