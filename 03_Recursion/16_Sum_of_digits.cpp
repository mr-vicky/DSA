#include <iostream>
using namespace std;

// Recurive solution
int sumOfDigits(int n)
{
    if (n == 0)
        return 0;
    return sumOfDigits(n / 10) + (n % 10);
}

// Optimized Recursive solution
int OsumOfDigits(int n)
{
    if (n == 0)
        return 0;
    return OsumOfDigits(n / 10) + (n % 10);
}

// Iterative solution : Preferred solution
int IsumOfDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

int main()
{
    cout << sumOfDigits(24658) << "\n";
    cout << OsumOfDigits(24658) << "\n";
    cout << IsumOfDigits(24658) << "\n";
    return 0;
}