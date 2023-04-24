#include<stdio.h>
int main()
{
    int *ptr=NULL;
    if(ptr)
    {
        printf("The value of pointer is : %d",*ptr);
    }
    printf("Program executed properly ");
    return 0;
}