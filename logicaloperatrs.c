#include<stdio.h>
int main()
{
    int num1=0;
    int num2=100;
    printf(" value of logical AND is : %d",num1&&num2);//0
    printf("\n value of logical OR is : %d", num1|| num2);//1
    printf("\n value of logical NOT is : %d", !num1);//1
    printf("\n value of logical NOT is : %d", !num2);//0
    return 0;
}