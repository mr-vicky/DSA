#include <iostream>
using namespace std;

int missingNumber(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum = sum + arr[i];
    }
    return n * (n + 1) / 2 - sum;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n - 1; i++)
        cin >> arr[i];

    cout <<  missingNumber(arr, n);
    cout << "\n";

    return 0;
}
