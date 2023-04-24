//sequence 0,3,6,9,.....300//
#include<stdio.h>
int main()
{
    int i;
    for(i=0; i<301 ; i++)
    {
if(i%3==0)
    {
        
        printf("%d ",i);
    }
    }
    
    return 0;
}