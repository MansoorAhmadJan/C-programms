#include<stdio.h>
int main(){
    printf("%d\n", 1 && 0);
printf("%d\n", 1 || 0);
printf("%d\n", !1);
printf("%d\n", !0);
printf("%d\n", 5 > 3 && 2 < 4);
printf("%d\n", 5 > 10 || 2 < 4);

return 0;
}