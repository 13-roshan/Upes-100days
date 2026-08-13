#include <stdio.h>
int main(){
int a;
int b;
printf("enter both values : ");
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("the swapped values are : %d  %d",a,b);   
return 0;
}