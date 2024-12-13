#include <stdio.h>

int main (){
    int n1, n2, n3, comp, quad;

    scanf("%d%d%d", &n1, &n2, &n3);

    if (n1>=10 || n2>=10 || n3>=10)
        printf("DIGITO INVALIDO\n");
    else{
        comp = (n1*100)+(n2*10)+n3;
        quad = comp*comp;
        printf("%d, %d\n", comp, quad);
    }

    return 0;
}