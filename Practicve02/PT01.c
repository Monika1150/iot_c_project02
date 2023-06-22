#include <stdio.h>
#include <conio.h>

#define PA printf("-----------------------------\n");
void main()
{
char name[20];
double  money;

    PA
    printf(" Program  Benefit of Loan\n ");
    PA
    printf(" Enter name of loan : ");
    scanf("%s" , &name);
    printf(" Enter money of loan : ");
    scanf("%lf" , &money);
    PA

    if(money >= 1000)
    {
        printf("Benefit of loan is : 2.5\n");
    }
    else
    {
        printf("Benefit of Loan is : 5.5\n");
    }
    PA

    getch();
}