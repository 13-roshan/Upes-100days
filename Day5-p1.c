#include<stdio.h>
#include <math.h>
int main(){
 float p,r,t,ci;
 printf("Enter Principle , Rate and time at once : ");
 scanf("%f %f %f",&p,&r,&t);
 printf("The simple interest is %f:\n",(p*r*t)/100);
 
 ci= p*(pow(1+r/100,t) - 1);
 printf("The compound interest is : %f",ci);




    return 0;
}