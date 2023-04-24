#include<stdio.h>
int main()
{  
    
    int num[5];
    printf("\n Enter elements in array (5)");
    for(int i=0;i<5;i++)
    {
      scanf("\n %d",&num[i]);
    }
    printf("\n Scanned elements in array(5)");
    for(int i=0;i<5;i++)
    {
        printf("\n %d",num[i]);
     }
     return 0;
}