#include<stdio.h>
#include<math.h>
int main(){

    float a,b,smallest;

    

    printf("enter the first number");
    scanf("%f",&a);

    printf("enter the second number");
    scanf("%f",&b);


    smallest=(a<b) ? a:b;

    printf("the smallest number is %f",smallest);
    

    return 0;
}