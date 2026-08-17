//Write a program to input a character and check whether it is an 
//uppercase alphabet, lowercase alphabet, digit, or special character
#include<stdio.h>
int main()
{
    char c;
    printf("Enter your Keyword : ");
    scanf("%c",&c);
if (c>='A' && c<='Z')
{
    printf("Upper Case");
}
else if (c>='a' && c<='z')
{
    printf("Lower Case");
}
else if (c>='0' && c<='9')
{
    printf("Number");
}
else (printf("Special characters"));





    return 0;
}