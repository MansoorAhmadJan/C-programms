#include<stdio.h>
int main(){
    int a,b,temp;
    printf("enter the values of a and b");
    scanf("%d %d",&a,&b);
    printf("numbers before swapping is a=%d and b=%d",a,b);

    temp=a;
    a=b;
    b=temp;

    printf("numbers after swapping a=%d and b=%d",a,b);

    return 0;
}