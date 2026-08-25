#include <stdio.h>

#include <math.h>

float principal;
float rate;
int time;
float simple_interst;

int main(){
printf("enter the value of principal");
scanf("%f",&principal);

printf("enter the value of rate");
scanf("%f",&rate);

printf("enter the time ");
scanf("%d",&time);

float simple_interst=principal * rate * time/100;
printf("the principal interst is %.2f",simple_interst);

return 0;


}