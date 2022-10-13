#include <iostream>
using namespace std;

This is an incomplete code--------------------------------------------------------------------------------------------
void oddOccuring(int arr[], int n)
{
    int xors = 0, res1 = 0, res2 = 0;
    for(int i = 0; i<n; i++)
    {
        xors = xors^arr[i];
    }
    int sn = xors & ~(xors-1);
    for(int i = 0; i<n; i++)
    {
        if((arr[i]&sn) != 0)
            res1 = res1^arr[i];
        else 
            res2 = res2^arr[i];
    }
    cout<<res1<<" "<<res2;
}


int main() {
   
   int n;
   cin>>n;
   int arr[n];
   for(int i = 0; i<n; i++)
   {
       cin<<arr[i];
   }

   oddOccuring(arr, n);
   return 0;
}
