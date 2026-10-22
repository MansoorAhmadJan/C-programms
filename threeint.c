#include <stdio.h>

int main(){

int a,b,c;

printf("enter the values of a, b and c\n");
scanf("%d %d %d",&a,&b,&c);

if (a>b)
{
    /* code */printf("%d\n",a);
}
else{
    printf("%d\n",b);
}

if (b>c)
{
    /* code */printf("%d\n",b);
}

else{
    printf("%d\n",c);


}


return 0;

}