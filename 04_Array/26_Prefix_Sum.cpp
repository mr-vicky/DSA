
#include<iostream>
using namespace std;

// Naive method
// Time: O(n)
// Aux space: O(1)
int getSum(int arr[], int s, int e)
{
    int sum=0;
    for(int i=s; i<=e; i++)
        sum+=arr[i];

    return sum;
}

// Efficient method:
// Time: O(1)
int getSumO(int pSum[], int l, int r){
    if(l==0)
        return pSum[r];
    return pSum[r]-pSum[l-1];
}

int main(){
    int n=7;
    int arr[n]={ 2, 8, 3, 9, 6, 5, 4};
    cout<<getSum(arr, 1, 3)<<endl;

    int pSum[n];
    pSum[0]=arr[0];
    for(int i=1; i<n; i++)
        pSum[i]=pSum[i-1]+arr[i];

    cout<<getSumO(pSum, 1, 3)<<endl;
    return 0;
}