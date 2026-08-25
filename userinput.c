#include<stdio.h>
int main(){
    int number;
    float value;
    printf("enter the integer and float value");
    scanf("%d %f",&number,&value);

    printf("the integer input from user is %d\n and input float value from user is  %.2f",number,value);

    return 0;

}