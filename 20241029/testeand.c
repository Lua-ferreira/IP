#include <stdio.h>
#define N 99
 
int main () {
    int n, l, c, fim;
    char borda, interior;
    scanf("%d%*c%c%*c%c", &n, &borda, &interior);
    int matriz[N][N];
 
    if (n%2==0 || n==0) {
        printf("Dimensao invalida!\n");
        return 0;
    }
 
    // preenche com espaco
    for(l=0; l<n; l++) {
        for(c=0; c<n; c++) {
            matriz[l][c] = ' ';
        }
    }
 
    // preenche a borda
 
    for(l=0; l<n; l++) {
        for (c=0; c<n; c++) {
            if (l<=(n/2) && c<=(n/2)) {
                matriz[l][(n/2)-l] = borda;
            } else if (l<=(n/2) && c>(n/2)) {
                matriz[l][(n/2)+l] = borda;
            } else if (l>(n/2) && c>(n/2)) {
                matriz[l][(n/2)-(n-l-1)] = borda;
            } else if (l>(n/2) && c<=(n/2)) {
                matriz[l][(n/2)+(n-l-1)] = borda;
            }
        }
    }

    // preenche o interior
 
    for(l=1; l<(n-1); l++) {
        fim=0;
        for (c=(n-1); fim==0; c--) {
            if(matriz[l][c]==borda) {
                fim = c;
            }
        }
        for (c=0; c<(fim-1); c++) {
            if(matriz[l][c]!=' ' ) {
                matriz[l][c+1]=interior;
            }
        }
    }
 
 
    for(l=0; l<n; l++) {
        for(c=0; c<n; c++) {
            printf("%c ", matriz[l][c]);
        }
        printf("\n");
    }
 
    return 0;
}