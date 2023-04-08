#include<iostream>
using namespace std;

// TC: 0(R*C) R=Rows, C=Columns
// SC: O(1)
void PrintInSnakePattern(int mat[4][4])
{
    for(int i=0; i<4; i++)
    {
        if(i%2==0)
            for(int j=0; j<4; j++)
                cout<<mat[i][j]<<" ";
        else 
            for(int j=3; j>=0; j--)
                cout<<mat[i][j]<<" ";
    }
}

int main()
{
    int mat[4][4]={{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};

    PrintInSnakePattern(mat);
    return 0;
}
