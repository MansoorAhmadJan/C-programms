#include <stdio.h>

int main(){

    int a,b;

    printf("eneter the values of a and b\n:");
scanf("%d %d",&a,&b);

a=a^b;
printf("%d\n",a);

b=b^a;
printf("%d\n",b);

a=a^b;
printf("%d\n",a);

return 0;
}