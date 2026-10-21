#include <stdio.h>

int main(){
    int a=12, b=10;
    int bitand,bitor,bitxor,bitnot,bitlshift,bitrshift;

    bitand=a&b;
    printf("%d\n",bitand);

    bitor=a|b;
    printf("%d\n",bitor);

    bitxor=a ^ b;
    printf("%d\n",bitxor);

    bitnot=~a;
    printf("%d\n",bitnot);

    bitlshift=a<<1;
    printf("%d\n",bitlshift);

    bitrshift=a>>1;
    printf("%d\n",bitrshift);

    return 0;
    

}