#include<stdio.h>




int main(){
float a,b;
char op;
printf("enter the two numbers as input\n");
scanf("%f %f",&a,&b);

printf("enter operater +,-,*,/ \n");
scanf(" %c",&op);

switch (op)
{
case '+':
    /* code */printf("result=%.2f\n",a+b);
    break;
case '-':
printf("result=%.2f\n",a-b);
break;

case '*':
printf("result=%.2f\n",a*b);
break;

case '/':
if (b==0)
{
    printf("cant divide by zero\n");
    
}
else{
    printf("result=%.2f",a/b);
}

break;
default:
printf("invalid input ");
    break;
}

return 0;

}