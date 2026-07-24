#include<stdio.h>
int main(){
    int menue;

    printf("enter the number\n");// 1 for pizza,2 for burger,3 for sandwich 
scanf("%d",&menue);

switch (menue)
{
case  1:printf("pizza\n");
break;

case 2:printf("burger\n");
break;

case 3:printf("sandwich\n");
break;

default:printf("invalid input\n");
    break;
}

return 0;

}