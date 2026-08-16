//Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include<stdio.h>
int main(){
    int y;
    printf("Enter Year : ");
    scanf("%d",y);
    if(y%4==0 && y%400!=0 || y%100==0)printf("The Year is Leap year");
    else printf("The Year is not leap year");




    return 0;
}