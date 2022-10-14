#include<iostream>
using namespace std;

void fun(int n)
{
    if(n==0) return ; // Base condition
    fun(n-1); // function call with change in parameter value
    cout<<n<<"\n";
    fun(n-1); // function call with change in parameter value
}

int main()
{
    fun(3);
    return 0;
}
