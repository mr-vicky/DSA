#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    // ---------------------------Array-------------------------------->

    int n = 5;
    int arr[n]= {3,5,1,6,7};

    cout<<"Array before sorting: "<<endl;
    for(auto x: arr)
        cout<<x<<" ";
    cout<<endl;

    // Sorting the array in increasing order
    sort(arr, arr+n);

    cout<<"Array after sorting in increasing order: "<<endl;
    for(auto x: arr)
        cout<<x<<" ";
    cout<<endl;

    // Sorting the array in decreasing order
    sort(arr, arr+n, greater<int>());

    cout<<"Array after sorting in decreasing order: "<<endl;
    for(auto x: arr)
        cout<<x<<" ";
    cout<<endl<<endl;

    // ---------------------------Vector-------------------------------->

    vector<int>v{4,3,5,9,2};

    cout<<"Vector before sorting: "<<endl;
    for(auto x: v)
        cout<<x<<" ";
    cout<<endl;

    // Sorting the vector in increasing order
    sort(v.begin(), v.end());

    cout<<"Vector after sorting in increasing order: "<<endl;
    for(auto x: v)
        cout<<x<<" ";
    cout<<endl;

    // Sorting the vector in decreasing order
    sort(v.begin(), v.end(), greater<int>());

    cout<<"vector after sorting in decreasing order: "<<endl;
    for(auto x: v)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}