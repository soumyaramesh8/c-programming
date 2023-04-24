#include<stdio.h>
int main()
{
    int a = 10;
    int b=50;
    printf("value of a is : %d",a);//10
    printf("\n value of b is : %d",b);//50
    a=a+1;//a=11
    printf("\n value of updated a is %d",a);//11
    a+=1;//a=a+1  a=12
    printf("\n new value of a is : %d",a);//a=12
    b+=3;//b=b+3   b=53
    printf("\n new value of b is : %d", b);//b=53
    b++;//post increment  b=b+1  b=54
    printf("\n value of updated b is :%d",b);//54
    ++a;// preincrement a=a+1
    ++b;//b=b+1
    printf("\n value of a is : %d",a);//a=13   
    printf("\n value of b is : %d",b);//b=55

    return 0;
}