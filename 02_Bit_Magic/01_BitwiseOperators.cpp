#include <iostream>
using namespace std;

int main()
{
    int x = 3, y = 6;
    cout << "(x & y) : "<<(x & y) << endl;
    cout << "(x | y) : "<<(x | y) << endl;
    cout << "(x ^ y) : "<<(x ^ y) << endl;

    int a = 3;
    cout << (x << 1) << endl;
    cout << (x << 2) << endl;
    int b = 4;
    cout << (x << b) << endl;

    return 0;
}