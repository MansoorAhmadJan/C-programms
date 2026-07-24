#include<stdio.h>
int main(){
    char alpha;

    printf("enter the vowel character(a,e,i,o,u)");
    scanf("%c",&alpha);

    switch (alpha)
    {
    case 'a':printf("vowel");
    
        break;
    case 'e':printf("vowel");
break;

case 'i':printf("vowel");
break;

case 'o':printf("vowel");
break;

case 'u':printf("vowel");
break;

    default:printf("invalid charcter");
    }

    return 0;
}