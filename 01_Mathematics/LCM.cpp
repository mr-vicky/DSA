#include <iostream>
#include <cmath>
using namespace std;

// LCD solutiom -> 
int LCM(int a, int b)
{
    int res = max(a, b);
    ;
    while (true)
    {
        if (res % a == 0 && res % b == 0)
        {
            return res;
        }
        res++;
    }
    return res;
}

// LCD efficient solution ->
int GCD(int a, int b)
{
    if(b == 0)
    {
        return a;
    }
    return GCD(b, a%b);
}


int main()
{
    int a, b;
    cin >> a >> b;
    cout << LCM(a, b) << "\n";
    return 0;
}
