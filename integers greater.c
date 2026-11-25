#include<stdio.h>

int main(){
float a,b,c;

printf("enter the three values\n");
scanf("%f %f %f",&a,&b,&c);

if (a>b)
{
    /* code */if (a>c)
    {
        /* code */printf("a is largest value\n");
    }
    else{
        printf("c is largest\n");
    }


    
    
}

else{
    if (b>c)
    {
        printf("b is the largest integer\n");
    }
    else{
        printf("c is the largest");
    }
}

return 0;

}