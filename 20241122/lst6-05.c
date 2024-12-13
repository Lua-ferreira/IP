#include <stdio.h>
#include <string.h>

struct{
    int cod;
    double valor;
    char nome[101];
}typedef dataCurso;

struct{
    char aluno[501];
    int codMat;
    int numCred;
    double mensalidade;
}typedef dataAluno;

int main(){
    int n, m, i, j;
    dataCurso Curso[30];
    dataAluno Aluno[1000];

    scanf("%d%*c", &n);

    for(i=0; i<n; i++){
        scanf("%d%*c", &(Curso[i].cod) );
        scanf("%lf%*c", &(Curso[i].valor) );
        scanf("%100[^\n]%*c", Curso[i].nome);
    }

    scanf("%d%*c", &m);

    for(i=0; i<m; i++){
        scanf("%500[^\n]%*c", Aluno[i].aluno);
        scanf("%d%*c", &(Aluno[i].codMat));
        scanf("%d%*c", &(Aluno[i].numCred));
        for(j=0; j<n; j++){
            if(Aluno[i].codMat == Curso[j].cod){
                Aluno[i].mensalidade = Curso[j].valor * Aluno[i].numCred;

                printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2lf Mensalidade: %.2lf\n",
                Aluno[i].aluno, Curso[j].nome, Aluno[i].numCred, Curso[j].valor, Aluno[i].mensalidade);
                break;
            }
        }   
    }

    return 0;
}