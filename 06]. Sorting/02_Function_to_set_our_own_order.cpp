#include<iostream>
#include<algorithm>
using namespace std;

struct Point{
    int x, y;
};

bool myCmp(Point p1, Point p2)
{
    return p1.x<p2.x; // sorting according to increasing order of x
}

int main()
{
    Point arr[]={{3,10}, {2,8}, {5,4}};

    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n, myCmp);

    for(auto i: arr)
        cout<<i.x<<" "<<i.y<<endl;    
    return 0;
}
