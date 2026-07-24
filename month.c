#include<stdio.h>

int main(){
    int number;
    printf("enter the number og month (1-12)");
    scanf("%d",&number);

    switch (number){
case 1:printf("31days");
break;

case 2:printf("28days");
break;

case 3:printf("31days");
break;

case 4:printf("30days");
break;

case 5 :printf("31days");
break;

case 6:printf("30days");
break;

case 7:printf("31days");
break;

case 8:printf("30days");
break;

case 9:printf("31days");
break;

case 10:printf("30days");
break;

case 11:printf("31days");
break;

case 12:printf("31days");
break;

default:printf("invalid value");

    }
    
    return 0;
}