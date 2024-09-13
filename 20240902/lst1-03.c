#include <stdio.h>

int main () {
    float rl, bl, hl, ab, m2, cpm;
    scanf("%f%f", &rl, &hl);
    bl=2*rl*3.14159;
    ab=rl*rl*3.14159;
    m2=(bl*hl)+2*ab;
    cpm=m2*100;

    printf("O VALOR DO CUSTO E = %.2f\n", cpm);

    return 0;
}