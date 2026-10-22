#include <stdio.h>

int main(){
int  a;
printf("enter the value of integer\n");
scanf("%d",&a);

if (a==0)
{
    /* code */printf("ineteger is zero");
}

else if (a>0)
{
    /* code */printf("integer is positive");
}

else if (a<0)
{
    /* code */printf("integer is negative");

}

else{

    printf("invalid input");
}

return 0;

}