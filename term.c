#include<stdio.h>
int main(){

    int age;


    printf("enter the age");
    scanf("%d",&age);

    age>18? printf("can vote"): printf("not eligible to vote");
    
    printf("thanks");

    return 0;
}