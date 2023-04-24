#include<stdio.h>
int main()
{
    int n[10]={54,98,543,987,143,754,98,564,814,8};
    int num=10;
    int *poi=n;
    printf("%d",n);
    printf("\n %d",poi);
    printf("\n %d",*poi);
    printf("\n %d",*(poi+1));
    printf("\n %d",*(poi+2));
    return 0;
}