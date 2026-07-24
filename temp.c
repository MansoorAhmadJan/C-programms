#include<stdio.h>
#include<stdlib.h>

int main(){

  float celsius;
  float fahrenheit;
  
  printf("enter celsius");
  scanf("%f",&celsius);

  fahrenheit=(celsius*9/5)+32;

  printf("celsius in fahrenheit=%f",fahrenheit);

  return 0;

}