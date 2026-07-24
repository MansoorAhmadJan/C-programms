#include<stdio.h>
int main(){
    int marks;
    printf("enter the marks");//markes range from 0 to 100
    scanf("%d",&marks);

    if (marks >=30)
    {
        printf("passed");
        if (marks >30)
        {
            printf("failed");
        }
        
    }
else{
    printf("not valid input");

}

return 0;
    
}