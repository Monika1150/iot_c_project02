#include<stdio.h>
#include<conio.h>
#define LINE printf("++++++++++++++++++++++++\n");
void main(){
    char name[20];
    double number,minute,pay;

    LINE
    printf("Program  Telephone\n");
    LINE
    printf("Enter  name of telephone:");
    scanf("%s",&name);
    printf("Enter  number of telephone :");
    scanf("%lf",&number);
    printf("Enter  minute for use telephone :");
    scanf("%lf",&minute);
    LINE

    if(minute <=15){
        pay = minute*5;
        printf("ay for use telephone is :%lf",pay);

    }else if(minute <=30){
        pay = minute*3;
        printf("ay for use telephone is :%lf",pay);

    }else{
        pay = minute*1.5;
        printf("ay for use telephone is :%lf",pay);
    }
}