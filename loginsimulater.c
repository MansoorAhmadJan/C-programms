#include<stdio.h>

int main(){
    const char correct_user='A';
    const int coorect_password=1234;

    char username;
    int pin;

    printf("enter the username\n");
    scanf("%c",&username);

   
    if (username==correct_user)
    {

         printf("enter your pin\n");
    scanf("%d",&pin);


        /* code */if (pin==coorect_password)
        {
            /* code */printf("access granted\n");
        }
        else{
            printf("password is incorrect\n");
        }
    }
    else{
        printf("incorrect username\n");
    }


    return 0;
}
