#include<stdio.h>
int main(){
    int month;


    printf("enter the month number\n");
    scanf("%d",&month);

    switch (month)
    {
    case 1:
        /* code */printf("january having 31 dys\n");

        case 3:
        printf("march having 31 days\n");

        case 5:
        printf("may having 31 days\n");

        case 7:
        printf("july having 31 days\n");

        case 8:
        printf("august having 31 days\n");

        case 10:
        printf("october having 31 days\n");

        case 12:
        printf("december having 31 days\n");

        break;
    
case 4:
printf("april having 30 days\n");

case 6:
printf("june having 30 days\n");

case 9:
printf("september having 30 days\n");

case 11:
printf("novemebr having 30 adys ");
break;
    default:
    printf("invalid input\n");
        break;
    }


    return 0;
}