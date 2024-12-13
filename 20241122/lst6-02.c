#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct{
    char produto[32];
    double preco;
}typedef Produto;

int main(){
    int n, m, p, i, j, feira;
    char produtoDesejado[32];
    int quantidade;
    double total;

    scanf("%d%*c", &n); //casos de teste

    for(feira=0; feira<n; feira++){
        scanf("%d%*c", &m); //qde de produtos disponiveis

        //alocar a memoria para a qde de produtos
        Produto *produtos = (Produto *)malloc(m * sizeof(Produto));
        for(i=0; i<m; i++){
            scanf("%s%*c%lf", produtos[i].produto, &produtos[i].preco);
        }

        scanf("%d%*c", &p); //qde de produtos que a muie quer comprar

        total = 0;
        for(i=0; i<p; i++){
            scanf("%s%*c%d", produtoDesejado, &quantidade); //le o que ela quer e a quantidade e armazena para o proximo loop

            for(j=0; j<m; j++){
                if(strcmp(produtoDesejado, produtos[j].produto) == 0){
                    total += produtos[j].preco * quantidade;
                    break;
                }
            }
        }

        printf("R$ %.2lf\n", total);

        free(produtos);
    }
}