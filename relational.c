#include <stdio.h>
int main(){
    int a=17, b=5;
    int sum, diff,divs,prd,mod;


sum=a+b;
diff=a-b;
divs=a/b;

prd=a*b;
mod=a%b;

printf("%d %d %d %d %d\n",sum,diff,divs,prd,mod);

a+=3;
printf("a after +=3 is %d\n",a);
a*=2;

printf("a after *=2 is %d\n",a);

return 0;

}