/*

# Multidimentional Arrays in C++ 

-> Elements are stored in row major order in C++
-> Internal curly brackets are optional but it strongly recommended to make the code readable
   E.g: int arr[3][2]={10,20,30,40,50,60}
-> Only the first dimentions can be omitted when we initialize. 
   E.g: int arr[][2]={{1,2},{3,4}};

*/ 

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // Method 1
    cout<<"Method 1: "<<endl;
    int arr1[3][2]={{10,10},{10,10},{10,10}};

    for(int i=0; i<3; i++)
        for(int j=0; j<2; j++)
            cout<<arr1[i][j]<<" ";

    // Method 2 : Double Pointer Method 
    cout<<endl<<"Method 2 : Double Pointer Method"<<endl;
    int **arr2;
    int n = 2;
    arr2 = new int *[n];

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<n; j++)
        {
            arr2[i][j]=10;
            cout<<arr2[i][j]<<" ";
        }
    }

    return 0;
}
