#include <stdio.h>

#include <stdlib.h>
#include <math.h>


int main(){

    int age;

    printf("enter the age\n");

    scanf("%d",&age);
    if(age>18){
        printf("adult,eligible to vote");

    }
    else{
        printf("not adult,not eligible to vote");
    }

    return 0;
}