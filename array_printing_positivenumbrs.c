#include<stdio.h>
int main()
{
    int num[10];
    printf("\n Enter elements of array(10)");
    for(int i=0;i<10;i++)
    {
        scanf("\n %d",&num[i]);
    }
    printf("\n positive elements in array(10)");
    for (int i=0;i<10;i++)
    {
        if(num[i]>0)
        {
            printf("\n %d",num[i]);
        }
    }
    return 0;
}

