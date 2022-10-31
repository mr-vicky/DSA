#include<iostream>
using namespace std;

// solution 1: 
// Time: O(n)
// Space: O(n)
void moveToEnd1(int arr[], int n)
{
    int count=0;
    int temp[5]={0};
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=0)
        {
            temp[count]=arr[i];
            count++;
        }
    }

    for(int i=0; i<n; i++)
    {
        arr[i]=temp[i];
    }
}

// solution 2:
// time: O(n^2) 
void moveToEnd2(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            for(int j=i+1; j<n; j++)
            {
                if(arr[j]!=0)
                {
                    int temp=arr[i]; 
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }
}

// solution 3: 
// Time: O(n)
// Space: O(1)
void moveToEnd3(int arr[], int n)
{
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=0)
        {
            int temp=arr[i];
            arr[i]=arr[count];
            arr[count]=temp;
            count++;
        }
    }
}

int main()
{
    int arr[5]={0, 1, 0, 2, 10};
    int n=5;

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
        cout<<endl;
    
    cout<<endl<<"solution 1: "<<endl;
    moveToEnd1(arr, n);

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    cout<<endl<<"solution 2: "<<endl;
    moveToEnd2(arr, n);

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    cout<<endl<<"solution 3: "<<endl;
    moveToEnd3(arr, n);

    for(int x : arr)
        cout<<x<<" ";

    return 0;
}