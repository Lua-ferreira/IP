#include <stdio.h>

void swap(int * A, int * B){
    int temp = *A;
    *A = *B;
    *B = temp;
}

int main(){
    int x, y;

    scanf("%d%d", &x, &y);
    swap(&x, &y);
    printf("x=%d, y=%d\n", x, y);

    return 0;
}

//codigo que troca o valor das variaveis via ponteiro