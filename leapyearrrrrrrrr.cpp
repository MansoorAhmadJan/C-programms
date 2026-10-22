#include <stdio.h>

int main(){

    int year;

    printf("enter the year");

    scanf("%d",&year);

    if (year % 4 ==0 && (year % 100 !=0 || year % 400 ==0))
    {
        /* code */printf("this is leap  year");
    }
    
else{
   printf("its not leap year");
}

return 0;


}