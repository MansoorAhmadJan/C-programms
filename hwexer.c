#include<stdio.h>
int main(){

    
    int a;
    int units,tens,hunderds;

    
    printf("enetr the vlaue to asssign it to a\n");
    scanf("%d",&a);

units=a%10;
printf("at unit place is %d\n",units);

hunderds=a/100;
printf("at hunders palce is %d\n",hunderds);

tens=(a/10)%10;
printf("at tens place is %d\n",tens);

return 0;


    return 0;

}