#include<stdio.h>
int main()
{
    int a=10;
    int b=50;
    printf("value of a is :%d",a);//a=10
    printf("\n value of b is :%d",b);//b=50
    printf("\n value of updated a is :%d", ++a);//a=11
    printf("\n value of new a is : %d",a++);//a=11  
    printf ("\n value of a after operation : %d",a);//a=12
    return 0;
}
/* in post increment like a++ , 
first it will print output,
then only increment the value 
when added with a statement like this prgrm.
so here no change ,a=11 itself evenafter
doing a++.

next case when we asked to print output after operation
 the changed new value is displayed ,ie, a=12*/