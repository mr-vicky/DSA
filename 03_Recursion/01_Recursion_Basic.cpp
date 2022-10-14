#include<iostream>
using namespace std;

void print(int n)
{
    if(n>0) // Base case 
    {
        cout<<"Vicky"<<"\n";
        print(n-1); // calling the function with the change in parameter
    }
}

int main()
{
    print(5);
    return 0;
}
