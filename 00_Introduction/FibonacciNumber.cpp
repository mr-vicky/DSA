#include <iostream>
using namespace std;

//  fibonacci using recursion method -->
 int fib(int n)
 {
     if (n <= 1) // for 0 and 1
     {
         return n;
     }
     return fib(n - 1) + fib(n - 2);
 }

// fibonacci using using recursion method -->
// int fib(int n)
// {
//     int f[n+1];
//     f[0] = 0;
//     f[1] = 1;
//     for(int i = 0; i<=n; i++)
//     {
//         f[i] = f[i-1] + f[i-2];
//     }
//     return f[n];
// }

 int main()
 {
     int n;
     cin >> n;

     cout << fib(n) << "\n";
     return 0;
 }
