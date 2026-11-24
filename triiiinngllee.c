#include<stdio.h>
int main(){
float a,b,c;
printf("enter the values of three sides of a triangle\n");
scanf("%f %f %f",&a,&b,&c);

if (a+b>c && b+c>a && a+c>b)
{
    /* code */printf("valid triangle");
}

else{
    printf("invalid triangle");
}


return 0;
}