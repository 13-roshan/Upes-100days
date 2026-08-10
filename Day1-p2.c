Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main(){
 int a,b;
 printf("Enter number 1st : ");
 scanf("%d",&a);
 printf("Enter number 2nd : ");
 scanf("%d",&b);
 printf("The sum of the numbers is : %d \n",a+b);
 printf("The difference of the numbers is : %d \n",a-b);
 printf("The product of the numbers is : %d \n",a*b);
 printf("The Quotient of the numbers is : %d \n",a/b);


    return 0;
}