//printing numbers for the given start and end values using for loop//
#include<stdio.h>
int main()
{
    int start,end,i;
    printf("Enter the first value :");
    scanf("%d",&start);
    printf("Enter the last value :");
    scanf("%d",&end);
    for(i=start;i<=end;i++)
    {
        printf("%d\n",i);
    }
    return 0;

}