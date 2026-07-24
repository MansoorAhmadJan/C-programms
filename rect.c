#include<stdio.h>
#include<stdlib.h>
int main(){

    int length;

    int breadth;

    printf("enter the value of length\n"),
    scanf("%d",&length);

    printf("enter the value of breadth");
    scanf("%d",&breadth);

    int recarea=length*breadth;

    printf("area of rectangle is %d",recarea);

    return 0;
}