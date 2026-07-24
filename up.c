#include<stdio.h>
int main(){
    char ch;
    printf("enter the charchter\n");
    scanf("%c",&ch);
    if (ch >='A' && ch<='Z')
    {
        /* code */printf("charchter is uppercase ");

    }
    else{
        printf("charchter is not an uppercase");
    }
    return 0;
}
