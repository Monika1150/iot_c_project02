#include<stdio.h>
#include<conio.h>
#define LINE printf("++++++++++++++++++++++++\n");
void main(){

    char home_number[50];
    double unit_of_electric,Pay_for_electric;

    LINE
    printf("Program  Pay Electric\n");
    LINE
    printf("Enter  home number :");
    scanf("%s",&home_number);
    printf("Enter  unit of electric :");
    scanf("%.2lf",&unit_of_electric);
    LINE
    if(unit_of_electric <=20){
        Pay_for_electric = unit_of_electric * 5;
        printf("Pay for electric use is : %.2lf bath\n",Pay_for_electric);
    }else if(unit_of_electric <=49){
        Pay_for_electric = unit_of_electric * 4.5;
        printf("Pay for electric use is : %.2lf bath\n",Pay_for_electric);
    }else{
        Pay_for_electric = unit_of_electric * 4;
        printf("Pay for electric use is : %.2lf bath\n",Pay_for_electric);
    }
    LINE
}