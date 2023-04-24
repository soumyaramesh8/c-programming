#include<stdio.h>
int main()
{
    int a=622300;
    int b=622400;
    double *an=622300,*bn=622400;
        printf("values : %d  %d",a,b);
    a++;
    b++;
    printf("\n new values : %d   %d ",a,b);
    printf("\n Values : %d  %d  ", an,bn);
    an++;
    bn++;
    printf(" \n New values : %d  %d ",an,bn);
    return 0;


}