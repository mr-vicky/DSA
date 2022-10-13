#include <iostream>
using namespace std;

// Method -> 1
bool isPowerOfTwo1(int n)
{
    if (n == 0)
        return false;
    while (n != 1)
    {
        if (n % 2 != 0)
            return false;
        n = n / 2;
    }
    return true;
}

// Method 2-> Effecient
bool isPowerOfTwo2(int n)
{
    if (n == 0)
        return 0;
    return (n & (n - 1) == 0);
}

int main()
{
    int n;
    cin >> n;
    // cout << boolalpha << isPowerOfTwo1(n);
    cout << boolalpha << isPowerOfTwo2(n);
    return 0;
}
