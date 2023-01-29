#include<iostream>
using namespace std;

int findMissing(int a[], int n)
{
    int res = 0;
    for(int i = 1; i<=n+1; i++)
    {
        res = res^a[i];
    }
    
    for(int i = 1; i<=n+1; i++)
    {
        res = res^i; 
    }

    return res;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 1; i<=n+1; i++)
        cin>>a[i];

    cout<<findMissing(a, n)<<"\n";

    return 0;
}
