#include<iostream>
#include<cmath>
using namespace std;

void printPowerSet(string str)
{
    int n = str.length(); 
    int pow_size = pow(2, n);
    
    for(int counter = 0; counter<pow_size; counter++)
    {
        for(int j = 0; j<n; j++)
        {
            if((counter & (1<<j)) != 0)
            {
                cout<<str[j];
            }
        }
        cout<<"\n";
    }
}

int main()
{
    string str = "abc";
    
    printPowerSet(str);
    return 0;
}