#include<iostream>
using namespace std;

int sum(int n);


int main()
{
    int n;
    cin>>n;
    int totalSum ;
    // totalSum = sum(n);
    cout<<"Sum : "<<sum(n)<<endl;
    return 0;
}

int sum(int n)
{
    int sum = 0;
    for(int i = n; i>0; i--)
    {
        sum = sum + i;
        cout<<i<<endl;
    }

    return sum;
}