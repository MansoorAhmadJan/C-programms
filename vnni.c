#include <stdio.h>

#include <stdlib.h>

#include <math.h>

int main(){
int a,b,small;

printf("enter the two numbers");
scanf("%d %d",&a,&b);

small=(a<b) ? a:b;
printf("smallest numbre is %d",small);
return 0;

}