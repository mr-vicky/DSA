/*
Problem : Count the number of Inversions in the array
I/P: [2,4,1,3,5]
O/P: 3

I/P: [10,20,30,40]
O/P: 0

I/P: [40,30,20,10]
O/P: 6
*/

#include<iostream>
using namespace std;
int count = 0;

// Naive Method:
// TC: O(n*n)
// SC: O(1)
int getInversions1(int arr[], int n)
{
    int count=0;
    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            if(arr[i]>arr[j])
                count++;
    return count;
}

// Efficient Method: Using Standard Merge Function 
// TC: O(n*log(n))
// SC: O(n)
int countAndMerge(int arr[], int l, int m, int r)
{
    int n1=m-l+1;
    int n2=r-m;
    int left[n1], right[n2];

    for(int i=0; i<n1; i++)
        left[i]=arr[l+i];
    for(int i=0; i<n2; i++)
        right[i]=arr[m+1+i];

    // Standard Merge Logic 
    int i=0, j=0, k=l, res=0;

    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j]){
            arr[k++]=left[i++];
        }
        else {
            arr[k++]=right[j++];
            res = res + (n1-i);
        }
    }
    while(i<n1)
        arr[k++]=left[i++];
    while(j<n2)
        arr[k++]=right[j++];

    return res;
}


int getInversions2(int arr[], int l, int r)
{
    int res = 0;
    if(l<r)
    {
        int m = l + (r-l)/2;

        res += getInversions2(arr, l, m);
        res += getInversions2(arr, m+1, r);
        res += countAndMerge(arr, l, m, r);
    }
    return res;
}

int main()
{
    int n = 5;
    int arr[n] = {2,4,1,3,5};

    cout<<"Naive Method: "<<endl;
    cout<<getInversions1(arr, n)<<endl;

    cout<<"Efficient Method: "<<endl;
    cout<<getInversions2(arr, 0, n-1)<<endl;
    return 0;
}
