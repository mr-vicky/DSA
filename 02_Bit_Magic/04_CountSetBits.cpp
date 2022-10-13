#include<iostream>
using namespace std;

// Naive solution ->
int countSetBits1(int n)
{
    int res = 0;
    while(n > 0)
    {    
        if(n%2 != 0) // OR if((n&1 == 1)) OR res = res + (n&1);
        {
            res++;
        }
        n = n/2; // n = n>>1;
    }
    return res;
}

// Brian Kerningms Algorithm ->
int countSetBits2(int n)
{
    int res = 0;
    while(n>0)
    {
        n = (n&(n-1));
        res++;
    }
    return res;
}

int main()
{
    int n;
    cin>>n;

    cout<<countSetBits1(n)<<"\n";
    cout<<countSetBits2(n)<<"\n";
    // cout<<countSetBits3(n)<<"\n";
    return 0;
}
