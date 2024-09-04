#include <stdio.h>

int main () {
    int h, min, seg;
    scanf("%d%d%d", &h, &min, &seg);
    min= min + (h*60);
    seg= seg + (min*60);

    printf("O TEMPO EM SEGUNDOS E = %d\n", seg);

    return 0;
}