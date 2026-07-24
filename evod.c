#include<stdio.h>
#include<stdlib.h>
int main(){
    /*for even 1,for odd 0 
    */

    int a;

    printf("enter a number");

    scanf("%d",&a);

    printf("%d",a%2==0);

    return 0;
}