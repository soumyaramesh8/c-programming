//printing from zero to end value using for loop//
#include<stdio.h>
int main()
{
    int end,i;
    printf("Enter the last value :");
    scanf("%d",&end);
    for(i=0;i<=end;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}