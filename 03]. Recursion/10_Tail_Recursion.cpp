#include<iostream>
using namespace std;

// - Tail recursive functions are faster than the other recursive function.
// - They are optimized by modern compilers
// - take less time 
// - less auxillary space 
// compared to their equivalent non-tail recursive function.
void fun(int n, int k)
{
    if(n==0) return;
    cout<<k<<" ";
    fun(n-1, k+1);
}

int main()
{
    fun(5, 1);
    return 0;
}