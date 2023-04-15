#include<iostream>
#include<algorithm>
using namespace std;

// Naive Solution
// TC: 0(R*C)
// SC: O(R*C)
void getTranspose1(int mat[4][4])
{
    int R = 4;
    int C = 4;
    int temp[R][C];

    for(int i=0; i<R; i++)
        for(int j=0; j<C; j++)
            temp[i][j]=mat[j][i];

    for(int i=0; i<R; i++)
        for(int j=0; j<C; j++)
            mat[i][j]=temp[i][j];
}

// Efficient Solution
// TC: O(R*C)
// SC: O(1)
void getTranspose2(int mat[4][4])
{
    int R=4;
    int C=4;

    for(int i=0; i<R; i++)
        for(int j=i+1; j<C; j++)
            swap(mat[i][j], mat[j][i]);
}

int main()
{
    int mat1[4][4]={{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};

    // Naive Solution: 
    cout<<"Naive Solution: "<<endl;
    getTranspose1(mat1);

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++)
            cout<<mat1[i][j]<<" ";
        cout<<endl;
    }

    cout<<endl<<endl;

    // Efficient Solution
    cout<<"Efficient Solution: In-place solution"<<endl;
    getTranspose2(mat1);

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++)
            cout<<mat1[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
