#include<stdio.h>
int main()
{
    int a=10;
    int b=50;
    printf("value of a is : %d",a);//a=10
    printf("\n value of b is :%d",b);//b=50
    b=a++;
    /*b=a  b=10  a=10
    a=a+1  b=10  a=11*/
    printf("\n value of b is : %d",b);// b=10
    printf("\n value of a is : %d",a);//a=11
    b=++a;
    /*a=a+1   a=12   b=11
    b=a       a=12  b=12 */
    printf("\n value of b is : %d ",b);//b=12
    printf("\n value of a is : %d",a);//a=12
    return 0;
}
