#include <stdio.h>
int main(){
float c,f;
printf("Enter celsius value :");
scanf("%f",&c);
f = (c * 9/5) + 32.0;
printf("The fahrenheit value is :%f\n",f);

return 0;
}