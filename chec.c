#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    char dig;

    printf("enter a charcter\n");

    scanf("%c",&dig);

    printf("%d",dig>='0' && dig<='9');

    return 0;

}