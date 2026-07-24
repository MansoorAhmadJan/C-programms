#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){

   int age;
   printf("enter the age");
   scanf("%d",&age);
   
   if(age>18){
    printf("can vote\n");
    printf("can drive\n");}

    else{
        printf("not eligible to vote\n");
        printf("cant drive\n");
    }
   

    printf("thank u\n");

    return 0;
}