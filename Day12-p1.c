//Write a program to calculate library fine based on late days :
#include<stdio.h>
int main(){
 int n;
 printf("Enter Day : ");
 scanf("%d",&n);
 if (n<=5)
 {
    printf("%d",n*2);
 }
 else if (n>5 && n<=10)
 {
    printf("%d",10+(n-5)*4);
 }
 else if(n>=11 && n<=30)
 {
   printf("%d",30+(n-10)*6);
 }
 else printf("Membership Expired");

    return 0;
}