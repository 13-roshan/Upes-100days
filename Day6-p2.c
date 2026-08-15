#include<stdio.h>
  int main(){
    int n;
    
    printf("Enter number : ");

    scanf("%d",&n);

    if(n>=1)printf("Positive");

    else if(n<=(-1))printf("Negative");

    if(n==0)printf("Zero");

 return 0;
  }