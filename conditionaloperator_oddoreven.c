#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value : ");
    scanf("%d",&a);
    a%2==1? printf("value is odd "): printf(" value is even");
    return 0;
}