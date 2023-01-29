#include<iostream>
using namespace std;

void TOH(int n, int a, int b, int c)
{
    if(n==1){
        cout<<"move a disk from "<<a<<" to "<<c<<"\n";
        return;
    }
    
    TOH(n-1, a, c, b);
    cout<<"move a disk from "<<a<<" to "<<c<<"\n";
    TOH(n-1, b, a, c);
}

int main()
{
    TOH(4, 1, 2, 3);
    return 0;
}
