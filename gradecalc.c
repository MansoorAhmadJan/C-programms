#include <stdio.h>

int main(){
int m;
printf("enter the value of m \n");
scanf("%d",&m);


if (m<0 || m>100)
{
    /* code */printf("ivalid input");
}

if (m>=90 && m<=100)
{
    /* code */printf("got grade A\n");
}

else if (m>=80 && m<=89)
{
    /* code */printf("got grade B\n");
}

else if (m>=70 && m<=79)
{
    /* code */printf("got grade C \n");
}

else if (m>=60 && m<=69)
{
    /* code */printf("got grade D \n");
}

else if (m<60)
{
    /* code */printf("got grade F \n");
}


return 0;

}