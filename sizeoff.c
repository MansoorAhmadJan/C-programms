#include <stdio.h>
int main(){
    printf("%zu bytes\n",sizeof (char));
    printf("%zu bytes\n ",sizeof (int));
    printf("%zu bytes\n",sizeof (float));
    printf("%zu bytes\n",sizeof (double));
    printf("%zu bytes\n",sizeof (long));
    printf("%zu bytes\n",sizeof (long long));

    return 0;
}