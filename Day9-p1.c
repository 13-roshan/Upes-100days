//Write a program to find the roots of a quadratic equation and categorize them.
#include<stdio.h>
#include<math.h>
int main()
{
 double a,b,c;
 double d,r1,r2;
 printf("Enter coefficients : ");
 scanf("%lf %lf %lf", &a,&b,&c);
 d=(b*b)-(4*a*c);
 if (d>0)
 {
    r1= (-b+ sqrt(d))/(2*a);
    r2= (-b- sqrt(d))/(2*a);
    printf("%.0lf %.0lf The roots are",r1,r2 );
 }
 else if (d==0)
 {
    r1= (-b)/(2*a);
    printf("Roots are real and same: %.0lf\n", r1);
 }
 else
 {
   printf("Roots are complex");
 }
 






    return 0;
}