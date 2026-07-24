#include <stdio.h>

int main(){
float num1,num2;
char op;

printf("enter the num1");

scanf("%f",&num1);

printf("enter the num2");

scanf("%f",&num2);

printf("enter the operator (+,-,*,/):");

scanf(" %c",&op);

switch(op){
    case '+' : printf("%f",num1 + num2 );
break;

case  '-': printf("%f",num1-num2);
break;

case '*': printf("%f", num1*num2);
break;

case '/':
if (num2 !=0 )
{printf("%f",num1/num2);

}
else{
    printf("cant be divisible by 0");
}

break;
default :printf("ivalid operator");
}
return 0;
}