
#include<stdio.h>
int main()
{
    int num;
    printf("Select Option : ");
    scanf("%d",&num);
    if(num==80)
    {
        printf("Hello World");
    }
    else if (num==100)
    {
        printf("Welcome All");
    }
    else
    {
        printf("Wrong Input");
    }
    return 0;
}