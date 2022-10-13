#include<iostream>
using namespace std;
incomplete program
// Solution 1
// void printDivisors(int n)
// {
//     for(int i = 0; i*i<=n; i++)
//     {
//         if(n%i==0)
//         {
//             cout<<i<<" ";
//             if(i != n/i)
//                 cout<<(n/i);
//         }
//     }
// }

// Solution 2 ->
// void printDivisors(int n)
// {
//     for(int i = 1; i*i<=n; i++)
//     {
//         if(n%i == 0)
//             cout<<i<<" ";
//     }
// }

// solution 3
void printDivisors(int n)
{
    int i;
    for(i = 1; i*i<n; i++)
    {
        if(n%i == 0)
            cout<<i<<" ";
    }
    for( ; i>=1; i--)
    {
        if(n%i == 0)
        {
            cout<<(n/i)<<" ";
        }
    }
}

int main()
{
    int n;
    cin>>n;

    // divisors(n);
    printDivisors(n);
    return 0;
}
