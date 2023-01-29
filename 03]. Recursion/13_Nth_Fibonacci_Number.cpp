#include<iostream>
using namespace std;

// Fibonacci Numbers: 0  1 1 2 3 5 8 13....
// fibonacci(n)=fibonacci(n-2)+fibonacci(n-1)

int fibonacci(int n){
    if(n<=1)    return n;
    return fibonacci(n-2)+fibonacci(n-1);
}

int main()
{
    cout<<fibonacci(5);
    return 0;
}