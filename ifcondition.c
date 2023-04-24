#include<stdio.h>
int main()
{
    int a;
    printf("Enter value of a :");
    scanf("%d",&a);
    if(a>0)
    {
        printf("value is positive");
    }
    else if(a<0)
    {
        printf("value is negative");
    }
    else
    {
        printf("value is zero");
    }
    return 0;
}