#include <stdio.h>

int main (){
    unsigned long int cod, cod_maior_lucro, cod_mais_vendida;
    int i, vendas, mais_vendas, qde_10, qde1020, qde20_, qde_total;
    float pcom, pven;
    double lucro, perc_lucro, maior_lucro, total_compras, total_vendas, total_lucro;

    qde_10=0; qde1020=0; qde20_=0;
    maior_lucro=0; mais_vendas=0;
    total_compras=0; total_vendas=0;
    

    while((scanf("%ld%f%f%d", &cod, &pcom, &pven, &vendas)) != EOF){
        lucro=(pven-pcom)*vendas;
        perc_lucro=(lucro/(pven*vendas))*100;

        /*printf("\nlucro=%lf\n", lucro);
        printf("perclucro=%lf\n", perc_lucro);*/

        if(perc_lucro<10)
            qde_10++;
        
        if(perc_lucro>10 && perc_lucro<20)
            qde1020++;

        if(perc_lucro>20)
            qde20_++;

        qde_total++;

        if(lucro>maior_lucro){
            maior_lucro=lucro;
            cod_maior_lucro=cod;
        }

        if(vendas>mais_vendas){
            mais_vendas=vendas;
            cod_mais_vendida=cod;
        }

        total_compras+=(pcom*vendas);
        total_vendas+=(pven*vendas);
        total_lucro=((total_vendas-total_compras)/total_compras)*100;

    }

        printf("\nQuantidade de mercadorias que geraram lucro menor que 10%%: %d\n", qde_10);
        printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %d\n", qde1020);
        printf("Quantidade de mercadorias que geraram lucro maior do que 20%%: %d\n", qde20_);
        printf("Codigo da mercadoria que gerou maior lucro: %ld\n", cod_maior_lucro);
        printf("Codigo da mercadoria mais vendida: %ld\n", cod_mais_vendida);
        printf("Valor total de compras: %.2lf, valor total de vendas: %.2lf e percentual de lucro total: %.2lf%%\n\n", total_compras, total_vendas, total_lucro);
    
    return 0;
}