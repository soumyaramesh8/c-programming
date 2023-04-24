#include<stdio.h>
int main()
{
    int a;
    
    printf(" Enter the value of a :");
    scanf("%d",&a);
    if(a==0|| a==1)
    {
        printf("%d is neither prime nor composite ",a);
        return 0;
    }
    else
    {
      for(int i=2;i<a;i++)
      {
        if(a%i==0)
        {
            printf(" %d is a composite number ",a);
            goto  lab;

        }
      }
      printf("%d is prime number ",a);
      lab:
      getchar();
    }
}