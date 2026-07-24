#include<stdio.h>
int main(){
    int num;
    printf("enter the number");
    scanf("%d",&num);
    if (num >=0)
    {
       printf("positve\n") ;
       if (num % 2==0)
       {
        printf("even\n");
       }
       else{
       printf ("odd\n");
       }
       
    }
    else{
        printf("negative");
    }
   return 0; 
}