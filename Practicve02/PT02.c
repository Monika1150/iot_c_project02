#include <stdio.h>
#include <conio.h>

#define LINE printf("-----------------------------\n");
void main()
{
    char name[30],car_number[30];
    double hour;

    LINE
    printf("    PROGRAM Rent Taxi\n");
    LINE
    printf("Enter  name for rent : ");
    scanf("%s" , &name );
    printf("Enter  car number for rent : ");
    scanf("%lf" , &car_number );
    printf("Enter  hour for rent : ");
    scanf("%s" , &name );
    LINE
    
    if(hour <= 5)
    {
        printf("Pay for rent is : 100.00 B.\n");
    }
    else if(hour <= 10)
    {
        printf("Pay for rent is : 90.50 B.\n");
    }
    else if(hour<= 15)
    {
        printf("Pay for rent is : 80.00 B.\n");
    }
    else
    {
        printf("Pay for rent is : 70.50 B.\n");
    }
    LINE

    getch();

}