#include<stdio.h>
int main()
{
    int a;
    printf("Enter value of a : ");
    scanf("%d",&a);
    switch(a%2)
    {
        case 0:
        printf(" value is even ");
        break;
        case 1:
        printf("value is odd "  );

    }
    return 0;
}