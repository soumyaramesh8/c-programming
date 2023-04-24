#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter value of a : ",a);
    scanf("%d",&a);
    printf("Enter value of b :",b);
    scanf("%d",&b);
    if(a==100)
    {
        printf("\n value of a is 100",a);
        if(b==200)
        {
            printf("\n value of b is 200",b);
        }
        else
        {
            printf("\n value of b is not 200",b);
        }
    }
    else
    {
            printf("\n value of a is not 100",a);
     if(b==200)
     {
        printf("\n value of b is 200",b);
     } 
     else
     {
        printf("\n value of b is not 200",b);
     }      
    }
    return 0;
}
 