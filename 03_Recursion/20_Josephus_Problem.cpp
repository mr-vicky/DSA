#include<iostream>
using namespace std;
// Starting the first position of the person from: 0

int jos(int n, int k){
    if(n==1) // if only one person is left then he will kill himself
        return 0;

    return (jos(n-1, k)+k)%n;
}

int main()
{
    cout<<jos(6, 2);
    return 0;
}