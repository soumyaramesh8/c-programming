#include<stdio.h>
int main()
{
    int mat[4][3]={12,25,30,22,65,45,67,96,35,36,14,87};
    for(int i=0;i<3;i++)
    {
        printf("%d",mat[0][i]);
        printf("\t");
    }
    
    return 0;
}