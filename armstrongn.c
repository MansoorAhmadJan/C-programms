#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c,x,y,r;
    printf("enter a number");
scanf("%d",&x);

a=x % 10;

y=x / 10;

b=y % 10;

c=y / 10;

r=(a*a*a)+(b*b*b)+(c*c*c);

if(r==x){
    printf("this number is an  angstrom");


}
else{
    printf("this is not an angstrom");
}

return 0;

}