#include <stdio.h>
#include <string.h>

int main(){
    double num;
    unsigned char numchar;

    scanf("%lf", &num);

    numchar=num;

    printf("%c", numchar);

    return 0;
}