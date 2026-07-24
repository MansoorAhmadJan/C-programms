#include<stdio.h>
#include<ctype.h>z

int main(){
    char ch;
    printf("enter the charchter\n");
    scanf("%c",&ch);
    if (isupper(ch))
    {
        printf("charchter is uppercase ");

    }
    else{
        printf("charchter is not an uppercase");
    }
    return 0;
}
