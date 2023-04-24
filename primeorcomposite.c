#include<stdio.h>
int main()
{   int a;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    if(a==0 || a==1)
    {
        printf("%d is neither prime nor composite ",a);
        return 0;
    }
    else
    {
        int t=0;
        for(int i=2;i<a;i++)
        {
            if(a%i==0)
            
            {
                t=1;
                printf("%d is composite number",a);
                break;
            }
        }
         if (t==0)
         {
            printf("%d is prime number",a);
         }
    }


}