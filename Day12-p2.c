//Write a program to calculate electricity bill based on units consumed with these rates: 
#include<stdio.h>
int main()
{
int units;
printf("Enter Units : ");
scanf("%d",&units);
if (units<=100)
{
    printf("%d",units*5);
}
else if (units>100 && units<=200)
{
    printf("%d",500+(units-100)*7);
}
else if (units>200 && units<=300)
{
    printf("%d",1200+(units-200)*10);
}
else if (units>300)
{
    printf("%d",2200+(units-300)*12);
}
return 0;
}