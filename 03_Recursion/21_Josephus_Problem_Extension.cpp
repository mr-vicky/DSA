#include<iostream>
using namespace std;
// Starting the first position of the person from: 1

int jos(int n, int k)
{
    if(n==1)
        return 0;

    return (jos(n-1, k)+k)%n;
}

int myJos(int n, int k)
{
    return jos(n, k)+1;
}

int main()
{
    cout<<myJos(7, 3);
    return 0;
}