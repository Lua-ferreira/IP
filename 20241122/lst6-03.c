#include <stdio.h>
#include <string.h>

struct{
    char pais[50];
    char traducao[100];
}typedef FelizNatal;

//seta o banco de dados
FelizNatal frases[] = {
    {"brasil", "Feliz Natal!"},
    {"alemanha", "Frohliche Weihnachten!"},
    {"austria", "Frohe Weihnacht!"},
    {"coreia", "Chuk Sung Tan!"},
    {"espanha", "Feliz Navidad!"},
    {"grecia", "Kala Christougena!"},
    {"estados-unidos", "Merry Christmas!"},
    {"inglaterra", "Merry Christmas!"},
    {"australia", "Merry Christmas!"},
    {"portugal", "Feliz Natal!"},
    {"suecia", "God Jul!"},
    {"turquia", "Mutlu Noeller"},
    {"argentina", "Feliz Navidad!"},
    {"chile", "Feliz Navidad!"},
    {"mexico", "Feliz Navidad!"},
    {"antardida", "Merry Christmas!"},
    {"canada", "Merry Christmas!"},
    {"irlanda", "Nollaig Shona Dhuit!"},
    {"belgica", "Zalig Kerstfeest!"},
    {"italia", "Buon Natale!"},
    {"libia", "Buon Natale!"},
    {"siria", "Milad Mubarak!"},
    {"marrocos", "Milad Mubarak!"},
    {"japao", "Merii Kurisumasu!"},
    
};

const char* buscaPais(const FelizNatal frases[], int n, const char *passando){
    int i;
    for(i=0; i<n; i++){
        if(strcmp(frases[i].pais, passando) == 0){
            return frases[i].traducao;
        }
    }
    return "-- NOT FOUND --";
}

int main(){
    int n;
    char passando[50];
    const char *traducao;

    n = sizeof(frases) / sizeof(frases[0]); //calcula qde de frases no array

    while(scanf("%s", passando) != EOF){
        traducao = buscaPais(frases, n, passando);
        printf("%s\n", traducao);
    }
    
    return 0;
}