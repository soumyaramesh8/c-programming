//printing from zero to end value using while loop//
#include<stdio.h>
int main()
{
    int end,i;
    printf("Enter the last number :");
    scanf("%d",&end);
    i=0;
    while(i<=end)
    {
        printf("%d\n",i);
        i++;
        
    }
    return 0;
}