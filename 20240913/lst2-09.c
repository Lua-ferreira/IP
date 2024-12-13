#include <stdio.h>

int main (){
    int a, b, y;

    scanf("%d%d", &a, &b);

    for (y=0; a<b; y++){
        a += ((a*3)/100);
        b += ((b*1.5)/100);
    }
    printf("ANOS = %d\n", y);
    
    return 0;
}