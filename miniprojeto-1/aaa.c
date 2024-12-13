#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int operacao(char c){
    int cont=0;

    if(c=='+' || c=='-' || c=='*' || c=='/' || c=='%' || c=='~')
        cont=1;
    
    if(c=='=' || c=='!' || c=='<' || c=='>')
        cont=2;

    if(c=='^' || c=='v' || c=='x'){
        return 3;
        printf("cont %d\n", cont);
    }

} //verifica qual operação o programa irá realizar e seta um contador para o caso de a operação ser inválida


double aritmetico(double op1, char operator, double op2) {
    switch (operator) {
        case '+': return op1 + op2;
        case '-': return op1 - op2;
        case '*': return op1 * op2;
        case '/': return op1 / op2;
        case '%': return (int)op1 % (int)op2;
        case '~': return pow(op1, op2);
        default: return 0; // Never reached
    }
}

bool relacional(double op1, char operator, double op2) {
    switch (operator) {
        case '=': return op1 == op2;
        case '!': return op1 != op2;
        case '<': return op1 < op2;
        case '>': return op1 > op2;
        default: return false; // Never reached
    }
}

bool calculateLogical(int op1, char operator, int op2) {
    switch (operator) {
        case '^': return op1 && op2;
        case 'v': return op1 || op2;
        case 'x': return op1 ^ op2;
        default: return false; // Never reached
    }
}

int main() {
    /*char expression[50];
    printf("Digite a expressão (ex: 1+3): ");
    scanf("%s", expression);

    double op1, op2;
    char operator;

    // Parse the expression
    if (sscanf(expression, "%lf%c%lf", &op1, &operator, &op2) != 3 || !isOperator(operator)) {
        printf("Expressão inválida.\n");
        return 1;
    }*/

    double op1, op2;
    char operator;

    double num1, num2;
    char operador, c;
    double resultado_a;
    bool resultado_b;
    int caso=0, cont=0;

    scanf("%lf%c%lf", &num1, &operador, &num2);

    caso=operacao(operador);

    printf("caso: %d\n", caso);

    // Determinar o tipo de operação e calcular
    if (caso==1) {
        // Operação aritmética
        double result = aritmetico(num1, operador, num2);
        printf("Resultado: %.2f\n", result);
    } else if (caso==2) {
        // Operação relacional
        bool result = relacional(op1, operator, op2);
        printf("Resultado: %s\n", result ? "true" : "false");
    } else if (caso==3) {
        // Operação lógica (considerando que op1 e op2 são 0 ou 1)
        int intOp1 = (op1 != 0) ? 1 : 0;
        int intOp2 = (op2 != 0) ? 1 : 0;
        bool result = calculateLogical(intOp1, operator, intOp2);
        printf("Resultado: %s\n", result ? "true" : "false");
    } else {
        printf("Operador desconhecido.\n");
    }

    return 0;
}