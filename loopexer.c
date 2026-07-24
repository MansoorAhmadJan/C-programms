#include<stdio.h>
int main(){
int n;
    printf("enter the natural number\n");

    scanf("%d",&n);
int sum=0;

    for  (int i = 1; i<=n ; i++)
    {
        /* code */ sum=sum+i; //sum +=i
    }
    
    printf("sum is %d",sum);



    for (int i = n; i >=1;  i--)
    {
        /* code */printf("%d",i);
    }
    
    return 0;
}