#include<stdio.h>
int main()
{   
    int i;
    int num[10];
    printf("\n Enter the numbers in array(10)");
    for(int i=0;i<10;i++)
    {
        scanf(" \n %d",&num[i]);

    }
    printf("\n Even numbers :");
    for(int i=0;i<10;i++)
    {
    if(num[i]%2==0)
    {
      printf("\n %d",num[i]);
    }
    }
    return 0;
}