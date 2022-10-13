#include<iostream>
using namespace std;

// Method 2-> Efficient
int findOdd(int a[],int n)
{
    int res = 0;
    for(int i = 0; i<n; i++)
    {
        res = res^a[i]; // even no. pair will cancel out each other
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
    }

    // Method 1->
    for(int i = 0; i<n; i++)
    {
        int count = 0;
        for(int j = 0; j<n; j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }

        if(count%2 != 0)
        {
            cout<<"Method 1->"<<a[i]<<endl;
            break;
        }
    }

    cout<<"Method 2->"<<findOdd(a, n)<<endl;

    return 0;
}
