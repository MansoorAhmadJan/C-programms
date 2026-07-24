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

    else if(age>13 && age<=18){
        
        printf("teenager\n");
    }
   
    else{
        printf("child\n");
    }

    printf("thank u\n");

    return 0;
}