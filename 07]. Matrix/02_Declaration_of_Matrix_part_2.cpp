#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // Method 3 : Array of Pointer
    cout<<endl<<"Method 3 : Array of Pointer"<<endl;
    int m = 3;
    int n = 2;
    int *arr3[m];
    for(int i=0; i<m; i++)
        arr3[i] = new int[n];

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            arr3[i][j]=10;
            cout<<arr3[i][j]<<" ";
        }
    }

    // Method 4 : Array of Vectors
    cout<<endl<<"Method 4 : Array of Vectors"<<endl;
    vector<int>arr4[m];

    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            arr4[i].push_back(10);


    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            arr4[i][j]=10;
            cout<<arr4[i][j]<<" ";
        }
    }

    // Method 5: Vector of Vectors
    cout<<endl<<"Method 5: Vector of Vectors"<<endl;
    vector<vector<int>>arr5;

    for(int i=0; i<m; i++)
    {
        vector<int>v;
        for(int j=0; j<n; j++)
            v.push_back(10);
        arr5.push_back(v);
    }


    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            arr5[i][j]=10;
            cout<<arr5[i][j]<<" ";
        }
    }


    return 0;
}
