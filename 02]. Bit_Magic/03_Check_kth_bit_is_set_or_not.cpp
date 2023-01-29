#include<iostream>
using namespace std;

// Method 1 ->
void kthBit(int n, int k)  // ERROR in this function
{
    if(n&(1<<(k-1)) != 0)
    {   
        cout<<"Yes"<<"\n";
    }
    else
    { 
        cout<<"No"<<"\n";
    }
}

// Method 2->
void kthBit2(int n, int k)
{
    if((n>>(k-1)&1) == 1)
    {
        cout<<"Yes"<<"\n";
    }
    else
    {
        cout<<"No"<<"\n";
    }
}

int main()
{
    int n, k;
    cin>>n>>k;

    kthBit(n, k);
    cout<<endl;
    kthBit2(n, k);

    return 0;
}
