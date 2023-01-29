#include<iostream>
using namespace std;

int sumOfDigits(int n)
    {
        int temp=0;
        static int res=0;
        if(n>0)
        {
            temp=n%10;
            res=res+temp;
            sumOfDigits(n/10);
        }
        return res;
    }

int main()
{
    int n=0;
    cin>>n;

    cout<<sumOfDigits(n);
    return 0;
}
