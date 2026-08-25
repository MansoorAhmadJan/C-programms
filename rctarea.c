#include <stdio.h>

int main(){
    float length,width;

    

    printf("enter the length and width value");
    scanf("%f %f",&length,&width);

     float area=length * width;
    printf("the area of rectangle is %.2f",area);

    return 0;
}