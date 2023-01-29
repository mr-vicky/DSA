#include<iostream>
using namespace std;

int MaxCuts(int n, int a, int b, int c)
{
    if(n==0)
        return 0;
    if(n<0)
        return -1;

    int res = max(MaxCuts(n-a, a, b, c), max(MaxCuts(n-b, a, b, c), MaxCuts(n-c, a, b, c))); // taking the max value between these three condition

    if(res == -1)
        return -1;

    return res+1;
}

int main(){
    int n=5, a=2, b=1, c=5;

    cout<<MaxCuts(n, a, b, c);
    return 0;
}