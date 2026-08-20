//Write a program to find profit or loss percentage given cost price and selling price.
#include<stdio.h>
int main(){
 float cp,sp,profit,loss;
 printf("Enter Cost Price : ");
 scanf("%f",&cp);
 printf("\n Enter Selling Price : ");
 scanf("%f",&sp);
 
 

 if(sp>cp){
    profit=((sp-cp)/cp)*100;printf("Profit %.0f%%",profit);
          }
else if (cp==sp)
{
    printf("No Profit No Loss");
}
 else{loss=((cp-sp)/cp)*100;printf("Loss %.0f%%",loss);}
    return 0;
}