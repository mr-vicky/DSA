#include <iostream>
#include <string.h>
using namespace std;

bool isPalindrome(char str[], int s, int e)
{
    if (s >= e)
        return true;

    return (str[s] == str[e]) && isPalindrome(str, s + 1, e - 1);
}

int main()
{
    char str[] = "abba";
    int n = strlen(str);
    int s = 0, e = n - 1;
    cout << boolalpha << isPalindrome(str, s, e);
    
    return 0;
}