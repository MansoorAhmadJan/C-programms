#include<stdio.h>
#include<stdlib.h>
int main(){


    float pi=3.14;
    float radius;

    printf("enter the value of radius\n");
    scanf("%f",&radius);

    float area=pi*radius*radius;

    printf("the area of circle is %f",area);

    return 0;
}
