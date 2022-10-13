#include <iostream>
using namespace std;

int power(int x, int n)
{
    if (n == 0)
        return 1;
    int temp = power(x, n / 2);
    temp = temp * temp;
    if (n % 2 == 0)
        return temp;
    else
        return temp * x;
}

int main()
{
    int x, n;
    cin >> x >> n;

    cout << power(x, n);
    return 0;
}
