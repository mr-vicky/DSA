#include<iostream>
using namespace std;

// this function will act like floor of (logN base2)
int fun(int n)
{
    if(n==1) return 0;
    return 1+fun(n/2); 
}

int main()
{
    cout<<fun(16);
    return 0;
}
