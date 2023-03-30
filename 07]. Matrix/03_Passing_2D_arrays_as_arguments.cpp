#include<iostream>
#include<vector>
using namespace std;

void print1(int arr1[3][2])
{
    for(int i=0; i<3; i++)
        for(int j=0; j<2; j++)
            cout<<arr1[i][j]<<" ";
    cout<<endl;
}

void print2(vector<int> arr4[], int m)
{
    for(int i=0; i<m; i++)
        for(int j=0; j<arr4[i].size(); j++)
            cout<<arr4[i][j]<<" ";
    cout<<endl;
}

void print3(vector<vector<int>> &arr5)
{
    for(int i=0; i<arr5.size(); i++)
        for(int j=0; j<arr5[i].size(); j++)
            cout<<arr5[i][j]<<" ";
    cout<<endl;
}

int main()
{
    cout<<"Method 1: Passing Static 2D array:\n";
    int arr1[3][2]={{0,0},
                   {1,1},
                   {2,2}};

    print1(arr1);   

    //  Double pointer method
    cout<<"Double Pointer array :\n";
    int **arr2;
    int m = 3;
    int n = 2;
    arr2 = new int*[m];

    for(int i=0; i<m; i++){
        arr2[i]=new int [n];
        for(int j=0; j<n; j++)
        {
            arr2[i][j]=i;
            cout<<arr2[i][j]<<" ";
        }
    }

    // Using array of pointer 
    cout<<"\nUsing array of Pointers :\n";
    m=3;
    n=2;
    int *arr3[m];

    for(int i=0; i<m; i++){
        arr3[i]=new int [n];
        for(int j=0; j<n; j++)
        {
            arr3[i][j]=i;
            cout<<arr3[i][j]<<" ";
        }
    }

    // Method 2: Using array of Vectors
    cout<<"\nMethod 2: Using array of Vectors\n";
    m=3, n=2;
    vector<int>arr4[m];
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            arr4[i].push_back(i);
    
    print2(arr4, m);

    // Method 3: Using Vector of vectors
    cout<<"Method 3: Using Vector of vectors\n";
    vector<vector<int>> arr5;
    m=3, n=2;
    for(int i=0; i<m; i++)
    {
        vector<int>v;
        for(int j=0; j<n; j++)
            v.push_back(i);
        arr5.push_back(v);
    }
            
    print3(arr5);

    return 0;
}
