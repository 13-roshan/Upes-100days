#include<stdio.h>
int main(){
 int hours;
 int minutes,seconds,total;
 printf("Enter seconds : ");
 scanf("%d",&total);
 hours=total/3600;
 total=total%3600;
 minutes=total/60;
 seconds=total%60;
 
 printf("The hours, minutes and seconds are : %d:%d:%d\n", hours, minutes, seconds); 



    return 0;
}