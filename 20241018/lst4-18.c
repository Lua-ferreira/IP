#include <stdio.h>

int N, K; // Número de alunos e mínimo de presenças para manter a aula
int tempos[1000]; // Tempos de chegada dos alunos

int main() {
    int i, presentes = 0; // `presentes` conta os alunos que chegaram no horário
    
    // Leitura dos valores de N e K
    scanf("%d %d", &N, &K);

    // Leitura dos tempos de chegada dos alunos
    for (i = 0; i < N; i++) {
        scanf("%d", &tempos[i]);
        if (tempos[i] <= 0) { // Conta como presente se chegou no horário ou antes
            presentes++;
        }
    }

    // Verifica se a aula será cancelada
    if (presentes < K) {
        printf("SIM\n");
    } else {
        printf("NAO\n");

        // Impressão dos alunos presentes no horário em ordem inversa
        for (i = N - 1; i >= 0; i--) {
            if (tempos[i] <= 0) {
                printf("%d\n", i + 1); // `i + 1` para o número do aluno na lista do professor
            }
        }
    }

    return 0;
}
