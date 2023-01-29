#include<iostream>
using namespace std;

int sumOfSubset(int arr[], int n, int sum)
{
   if(n==0){
    return (sum==0)?1:0;
   }

    return sumOfSubset(arr, n-1, sum)+sumOfSubset(arr, n-1, sum-arr[n-1]);
}

int main()
{
    int arr[5]={10, 5, 2, 3, 6};
    int n= 5;
    int sum = 8;
    cout<<sumOfSubset(arr, n, sum);
    return 0;
}
