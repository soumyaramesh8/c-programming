#include<stdio.h>
int main()
{
    int mat[4][3]={
        {15,20,30},
        {25,35,40},
        {91,22,79},
        {97,36,67}
    };
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
        printf("%d ",mat[i][j]);
          
        }
        printf("\n");
    }
    return 0;
}