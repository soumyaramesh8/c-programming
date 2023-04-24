#include<stdio.h>
int main()
{
    int a;
    printf(" the selected number is :", a);
    scanf("%d",&a);
    if(a<20)
    {
        printf("value of a is less than 20");
    }
    else if(a>20)
    {
        printf("\n value of a is greater than 20");
    }
    return 0;
}