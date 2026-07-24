#include<stdio.h>
int main(){
    char grade;
    printf("enter the grade (A,B,C,D,F\n)");  //A,B,C,D,F
    scanf("%c" ,&grade);

    switch (grade){
case 'A':printf("excelent ");
break;

case 'B':printf("good");
break;

case 'C':printf("average");
break;

case 'D':printf("pass");
break;

case 'F':printf("fail");
break;

default:printf("invalid charcater");

    }
return 0;

}