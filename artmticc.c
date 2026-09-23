#include<stdio.h>
int main(){
    int a=17,b=5;

    int sum,diff,prd,div,modu;

    sum=a+b;
    printf("%d\n",sum);

    diff=a-b;
    printf("%d\n",diff);

    prd=a*b;
    printf("%d\n",prd);

    div=a/b;
    printf("%d\n",div);

    modu=a%b;
    printf("%d\n",modu);

    a+=3;
    printf("%d\n",a);

    a*=2;
    printf("%d\n",a);

    return 0;
}