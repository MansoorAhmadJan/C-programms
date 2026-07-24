#include<stdio.h>
int main(){
    int a,b,c,y,x,res;
    printf("enter a number");
    scanf("%d",&x);

    a=x%10;
    y=x / 10;
    b=y%10;
    c=y /10;

res=(a*a*a)+(b*b*b)+(c*c*c);

    if (x==res)
    {
        printf("its an armstrong");
    }
    else{
        printf("not an armstrong");
    }
return 0;

}