#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct{
    int cod;           // Código do curso
    double valor;      // Valor por crédito do curso
    char *nome;        // Nome do curso (alocado dinamicamente)
}typedef dataCurso;

struct{
    char *aluno;       // Nome do aluno (alocado dinamicamente)
    int codMat;        // Código do curso matriculado
    int numCred;       // Número de créditos matriculados
    double mensalidade;// Mensalidade calculada
}typedef dataAluno;

int main(){
    int n, m, i, j;
    char buffer[1000]; // Buffer para leitura dos nomes

    scanf("%d%*c", &n);

    dataCurso Curso[30];
    for(i=0; i<n; i++){
        scanf("%d%*c", &(Curso[i].cod));            // Leitura do código do curso
        scanf("%lf%*c", &(Curso[i].valor));         // Leitura do valor por crédito
        scanf("%1000[^\n]%*c", buffer);             // Leitura do nome do curso no buffer
        Curso[i].nome = malloc((strlen(buffer) + 1) * sizeof(char));
        strcpy(Curso[i].nome, buffer);               // Alocando e copiando o nome para a estrutura
    }

    scanf("%d%*c", &m);

    dataAluno Aluno[1000];
    for(i=0; i<m; i++){
        scanf("%1000[^\n]%*c", buffer);             // Leitura do nome do aluno no buffer
        Aluno[i].aluno = malloc((strlen(buffer) + 1) * sizeof(char));
        strcpy(Aluno[i].aluno, buffer);              // Alocando e copiando o nome para a estrutura

        scanf("%d%*c", &(Aluno[i].codMat));         // Leitura do código do curso matriculado
        scanf("%d%*c", &(Aluno[i].numCred));        // Leitura do número de créditos matriculados

        // Procura o curso correspondente ao código matriculado
        for(j=0; j<n; j++){
            if(Aluno[i].codMat == Curso[j].cod){
                Aluno[i].mensalidade = Curso[j].valor * Aluno[i].numCred; // Calcula a mensalidade

                // Exibe os dados formatados como boleto
                printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2lf Mensalidade: %.2lf\n",
                    Aluno[i].aluno, Curso[j].nome, Aluno[i].numCred, Curso[j].valor, Aluno[i].mensalidade);
                break;
            }
        }   
    }

    // Libera os espaços alocados para os nomes
    for(i=0; i<n; i++){
        free(Curso[i].nome);
    }

    for(i=0; i<m; i++){
        free(Aluno[i].aluno);
    }

    return 0;
}