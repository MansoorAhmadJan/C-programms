#include <stdio.h>

int  main(){

int b;

printf("enter the value of integer b\n");
scanf("%d",&b);

if (b % 2==0)
{
    /* code */printf("the number is even\n");
}
else {
    printf("integer is   odd\n");
}

if (b%4==0)
{
    /* code */ printf("number is divisible by 4");
}
else{
    printf("number is not divisible by 4");
}


return 0;

}