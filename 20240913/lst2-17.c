#include <stdio.h>

int main (){
    int n1, n2, n3, n4, soma;
    soma=0;
    scanf("%d%d%d%d", &n1, &n2, &n3, &n4);

    if(n1>=n2 && n1>=n3 && n1>=n4)
        soma=n2+n3+n4;
    else if(n2>=n1 && n2>=n3 && n2>=n4)
        soma=n1+n3+n4;
    else if(n3>=n1 && n3>=n2 && n3>=n4)
        soma=n1+n2+n4;
    else if(n4>=n1 && n4>=n2 && n4>=n3)
        soma=n1+n2+n3;

    printf("%d\n", soma);

    return 0;
}