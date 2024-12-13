#include <stdio.h>

int main (){
    int data, intdia, intmes, intano, dia, mes, ano;

    scanf("%d", &data);

    dia = data/1000000;
    intdia = dia*100;
    mes = (data/10000)-intdia;
    intdia = dia*1000000;
    intmes = mes*10000;
    ano = data - intdia - intmes;

    //printf("%d/%d/%d\n", dia, mes, ano);

    switch(mes){
    case 1:
        if(dia<0 || dia>31){
            printf("Data invalida!\n");
            break;
        }
        printf("%d de janeiro de %d\n", dia, ano);
        break;
    
    case 2:
        if(dia<0 || dia>28){
            printf("Data invalida!\n");
            break;
        }
        printf("%d de fevereiro de %d\n", dia, ano);
        break;

    case 3:
        if(dia<0 || dia>31){
            printf("Data invalida!\n");
            break;
        }
        printf("%d de marco de %d\n", dia, ano);
        break;

    case 4:
        if(dia<0 || dia>30){
            printf("Data invalida!\n");
            break;
        }
        printf("%d de abril de %d\n", dia, ano);
        break;

    case 5:
        if(dia<0 || dia>31){
            printf("Data invalida!\n");
            break;
        }
        printf("%d de maio de %d\n", dia, ano);
        break;

    case 6:
        if(dia<0 || dia>30){
            printf("Data invalida!\n");
            break;
        }
        printf("%d de junho de %d\n", dia, ano);
        break;

    case 7:
        if(dia<0 || dia>31){
            printf("Data invalida!\n");
            break;
        }
        printf("%d de julho de %d\n", dia, ano);
        break;

    case 8:
        if(dia<0 || dia>31){
            printf("Data invalida!\n");
            break;
        }
        printf("%d de agosto de %d\n", dia, ano);
        break;

    case 9:
        if(dia<0 || dia>30){
            printf("Data invalida!\n");
            break;
        }
        printf("%d de setembro de %d\n", dia, ano);
        break;

    case 10:
        if(dia<0 || dia>31){
            printf("Data invalida!\n");
            break;
        }
        printf("%d de outubro de %d\n", dia, ano);
        break;

    case 11:
        if(dia<0 || dia>30){
            printf("Data invalida!\n");
            break;
        }
        printf("%d de novembro de %d\n", dia, ano);
        break;

    case 12:
        if(dia<0 || dia>31){
            printf("Data invalida!\n");
            break;
        }
        printf("%d de dezembro de %d\n", dia, ano);
        break;
    
    default:
        printf("Data invalida!\n");
        break;
    }

    return 0;
}