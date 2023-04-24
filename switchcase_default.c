#include<stdio.h>
int main()
{
    char grade;
    switch(grade = 'D')
    {
        case 'A':
        printf("\n Excellent!");
        break;
        case 'B' :
        case 'C' :
        printf("\n Well Done");
        break;
        case 'D' :
        printf("\n You Passed");
        break;
        case 'F' :
        printf("\n Better Try Again");
        break;
        default:
        printf("\n Invalid Grade");

    }
    printf("\n Your grade is : %c",grade);
    return 0;

}