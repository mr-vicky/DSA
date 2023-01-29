#include <iostream>
#include <cmath>
using namespace std;

// Solution 1 ->
bool prime1(int n)
{
    if (n == 1)
        return false;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

// solution 2 ->
bool prime2(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    cout << boolalpha;
    cout << "Solution 1: " << prime1(n) << endl;
    cout << "Solution 2: " << prime2(n) << endl;
    return 0;
}
