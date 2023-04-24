//checking positive or negative using switch//
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value :");
    scanf("%d",&a);
    switch(a>=0)
    {
        case 1:
        switch(a==0)
        {
            case 1:
           printf(" value is zero");
           break;
           default:
           printf(" value is positive");
           break;
        }
       break;
       case 0:

            printf(" value is negative");
            break;
    }
    return 0;
}