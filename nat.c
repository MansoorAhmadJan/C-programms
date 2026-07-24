#include<stdio.h>
int main(){
    int number;

    printf("enter the number");
    scanf("%d",&number);

    if (number >=1 && number<=9)
    {
        /* code */printf("it is natural number");
    }
    else{
        printf("not a natural number");
    }

    return 0;
}