#include<iostream>
using namespace std;

int main()
{
    cout<<"Left shift operator: <<"<<"\n";
    int x = 3;
    cout<<(x<<1)<<endl;
    cout<<(x<<2)<<endl;

    int y = 4;
    cout<<(x<<y)<<endl<<endl;

    cout<<"Right shift operator: >>"<<"\n";
    int a = 33;
    cout<<(a>>1)<<endl;
    cout<<(a>>3)<<endl;
    int b = 4;
    cout<<(a>>y)<<endl;

    cout<<"~ Unary operator: (for unsigned bits)"<<"\n"; 
    unsigned int z = 1;
    cout<<(~z)<<endl;
    z = 5;
    cout<<(~z)<<endl;

     cout<<"~ Unary operator: (for signed bits)"<<"\n"; 
     int m = 1;
     cout<<(~m)<<"\n";
     m = 5;
     cout<<(~m)<<"\n";
    
    return 0;
}
