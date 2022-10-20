#include <iostream>
using namespace std;

// Euclidean Algorithm -->
int GCD(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a; // or b
}

// Euclidean Algorithm --> Optimiged Implementation
int GCD(int a, int b)
{
    if(b == 0)
        return a;
    else
        return GCD(b, a%b);
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << GCD(a, b) << "\n";
    return 0;
}
