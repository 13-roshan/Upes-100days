/*Write a program to classify a triangle as Equilateral, Isosceles, or Scalene
 based on its side lengths */
 #include<stdio.h>
 int main(){
 int a,b,c;
 printf("Enter all the three sides of Triangle : ");
 scanf("%d %d %d",&a,&b,&c);
 if (a==b && b==c && c==a)
 {
    printf("Equilateral Triangle");
 }
 else if (a!=b && b!=c && c!=a)
 {
    printf("scalen Triangle");
 }
 else
 {
    printf("Isosceles Triangle");
 }
 
 return 0;
 }
