#include <iostream>
#include <cmath>
using namespace std;

// Iterative solution -->
int countDigit1(int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}

// Recursive solution
int countDigit2(int n)
{
    if (n == 0)
        return 0;
    return 1 + countDigit2(n / 10);
}

// Logarithmic solution -->
int countDigit3(int n)
{
    return floor(log10(n) + 1); // OR
    // return ceil(log10(n));
}

int main()
{
    int n;
    cin >> n;

    cout << "Iterative solution -> " << countDigit1(n) << "\n";
    cout << "Recursive solution -> " << countDigit2(n) << "\n";
    cout << "Logarithmic solution -> " << countDigit3(n) << "\n";
    return 0;
}
