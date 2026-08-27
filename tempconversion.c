#include <stdio.h>
int main(){
    float temp_celsius;
    float temp_fahreheit;

    printf("enter the temprature in celsius");
    scanf("%f",&temp_celsius);

temp_fahreheit=( temp_celsius * 9.0/5) + 32;


    printf("temprature in fahrenheit is %f",temp_fahreheit);
    return 0;

}