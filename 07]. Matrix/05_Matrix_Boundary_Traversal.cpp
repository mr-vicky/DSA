#include<iostream>
using namespace std;

void getBoundaryTraversal(int mat[4][4])
{
    int R = 4;
    int C = 4;
    for(int i=0; i<R; i++)
    {
        if(i==0)
        {
            for(int j=0; j<R; j++)
            {
                cout<<mat[i][j]<<" ";
            }
        }
        else if(i==C-2)
        {
            for(int j=1; j<R; j++)
            {
                cout<<mat[i][j]
            }
        }
    }
}


int main()
{
    int mat[4][4]={{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};

    getBoundaryTraversal(mat);

    return 0;
}
