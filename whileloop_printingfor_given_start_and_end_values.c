//printing numbers for the given start and end values using while loop//
#include<stdio.h>
int main()
{
   int start,end,i;
   printf("Enter the first number :");
   scanf("%d",&start);
   printf("Enter the last number :");
   scanf("%d",&end);
   i=start;
   while(i<=end)
   {
     printf("%d\n",i);
     i++;
   }
   return 0;
   
}