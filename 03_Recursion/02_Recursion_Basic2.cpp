#include<iostream>
using namespace std;

void fun(int n)
{
    if(n==0) return; // Base case
    cout<<n<<"\n";
    fun(n-1); // calling the function with change in parameter
    cout<<n<<"\n";
}

int main()
{
    fun(3);
    return 0;
}

