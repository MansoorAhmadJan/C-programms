#include <stdio.h>
#include <stdlib.h>

int main(){

    float radius = 5;
    float pi = 3.14;
    float area;

    area = pi * radius * radius;

    printf("Radius = %f\n", radius);
    printf("Area of circle = %f\n", area);

    return 0;
}