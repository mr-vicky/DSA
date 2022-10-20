#include <iostream>
using namespace std;

// Iterative solution ->
int factorial1(int n)
{
    int res = 1;
    for (int i = 1; i <= n; i++)
    {
        res = res * i;
    }
    return res;
}

// Reversive solution ->
int factorial2(int n)
{
    int res = 1;
    if (n == 0)
    {
        return 1;
    }
    return n * factorial2(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << factorial1(n) << endl;
    cout << factorial2(n) << endl;

    return 0;
}
