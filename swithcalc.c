#include<stdio.h>
int main(){
float a,b;
char op;
float sum;
float sub;
float prd;
float divi;

printf("enter two float values\n");
scanf("%f %f",&a,&b);

printf("input char opertater");
scanf(" %c",&op);

switch (op)
{
case '+':
    /* code */sum=a+b;

    printf("addition is %.2f\n",sum);
    break;
case'-':
sub=a-b;
printf("subtraction is %.2f\n",sub);
break;

case'*':
prd=a*b;

printf("product is %.2f\n",prd);
break;

case'/':

if (b==0)
{
    /* code */printf("division by zero is not allowed\n");
}
else{
    divi=a/b;
    printf("divion is %.2f\n",divi);
}
break;
default:
printf("invalid case\n");
    break;
}


return 0;
}