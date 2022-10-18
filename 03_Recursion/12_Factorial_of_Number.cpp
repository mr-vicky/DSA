#include<iostream>
using namespace std;

// n! = 1*2*3*....*(n-1)*n
int factorail(int n){
    if(n==0)    return 1; // 1! OR 0! = 1
    return factorail(n-1)*n;
}

int main()
{
    cout<<factorail(5);
    return 0;
}