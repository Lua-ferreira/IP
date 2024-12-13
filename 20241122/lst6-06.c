#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct{
    int matricula;
    int dia, mes, ano;
    int data;
    char nome[201];
}typedef dataAluno;

int ComparaDataNasc(const dataAluno *data1, const dataAluno *data2){
    if(data1->data >= data2->data) return 1;
    else return 0;
}

int main(){
    int n, i, j, compara;
    dataAluno Aluno[31];

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &(Aluno[i].matricula));
        scanf("%d %d %d", &(Aluno[i].dia), &(Aluno[i].mes), &(Aluno[i].ano));
        scanf("%200[^\n]%*c", &(Aluno[i].nome));

        Aluno[i].data = (Aluno[i].ano * 10000) + (Aluno[i].mes * 100) + (Aluno[i].dia);
    }

    //bubble sort
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            compara = ComparaDataNasc(&Aluno[j], &Aluno[j+1]);
            if(compara){
                dataAluno temp = Aluno[j];
                Aluno[j] = Aluno[j+1];
                Aluno[j+1] = temp;
            }            
        }
    }

    for(i=n-1; i>=0; i--){
        printf("Matric.: %d Nome: %s Data Nasc: %d/%d/%d\n",
            Aluno[i].matricula, Aluno[i].nome, Aluno[i].dia, Aluno[i].mes, Aluno[i].ano);
    }

    return 0;
}