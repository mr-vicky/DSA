#include <iostream>
#include <cmath>
using namespace std;

// LCD Efficient solution -> a*b = gcd(a, b)*lcm(a, b);
int GCD(int a, int b)
{
    if(b == 0)
    {
        return a;
    }
    return GCD(b, a%b);
}

int LCM(int a, int b, int gcd)
{
    return (a*b)/gcd;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int gcd = GCD(a, b);
    int lcm = LCM(a, b, gcd);

    cout << lcm << "\n";
    return 0;
}
