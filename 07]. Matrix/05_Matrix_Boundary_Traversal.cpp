#include<iostream>
using namespace std;

// TC: 0(R+C)
// SC: O(1)
void getBoundaryTraversal(int mat[4][4])
{
    int R = 4;
    int C = 4;
    
    if(R==1)
        for(int i=0; i<C; i++)
            cout<<mat[0][i]<<" ";
    else if(C==1)
        for(int i=0; i<R; i++)
            cout<<mat[i][0]<<" ";
    else
    {
        for(int i=0; i<C; i++)
            cout<<mat[0][i]<<" ";
        for(int i=1; i<R; i++)
            cout<<mat[i][C-1]<<" ";
        for(int i=C-2; i>=0; i--)
            cout<<mat[R-1][i]<<" ";
        for(int i=R-2; i>=1; i--)
            cout<<mat[i][0]<<" ";
    }
}

int main()
{
    int mat1[4][4]={{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};

    getBoundaryTraversal(mat1);
    cout<<endl;

    return 0;
}
