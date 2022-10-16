#include<iostream>
using namespace std;

int factorial(int n, int k)
{
    if(n==0 || n==1) return k;
    factorial(n-1, k*n);    
}

int main()
{
    cout<<factorial(3, 1);
    return 0;
}
