#include<stdio.h>
int main()
{
    int n[10]={12,987,987,543,9,543,87,85,134,6};
    int num=10;
    printf("%d",num);
    printf("\n %d",n[0]);
    printf("\n %d",&num);
    printf("\n %d",&n[0]);
    printf("\n %d",n);
    return 0;
}