#include<iostream>
using namespace std;

// Naive Method:
// Time: O(n^2)
// Space: O(1)
int MajorityElement1(int arr[], int n)
{
    int count=0;
    for(int i=0; i<n; i++)
    {
        count=1;
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                count++; 
            }
        }

        if(count>(n/2))
            return i;
    }
    return -1;
}

// Efficient method:
// Time: O(n)
// Space: O(1)
int MajorityElement2(int arr[], int n)
{
	int res = 0, count = 1;

    	for(int i = 1; i < n; i++)
    	{
    		if(arr[res] == arr[i])
    			count++;
    		else 
    			count --;

    		if(count == 0)
    		{
    			res = i; count = 1;
    		}
    	}

    	count = 0;

    	for(int i = 0; i < n; i++)
    		if(arr[res] == arr[i])
    			count++;

    	if(count <= n /2)
    		res = -1;

    	return res; 
}


int main()
{
    int n=6;
    int arr[n]={3, 7, 0, 7, 7, 5};

    cout<<MajorityElement1(arr, n)<<endl;
    cout<<MajorityElement2(arr, n)<<endl;
    
    return 0;
}
