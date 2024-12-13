#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '%' || c == '~' ||
           c == '=' || c == '!' || c == '<' || c == '>' || c == '^' || c == 'v' || c == 'x';
}

double calculateArithmetic(double op1, char operator, double op2) {
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

bool calculateRelational(double op1, char operator, double op2) {
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
    char expression[50];
    printf("Digite a expressão (ex: 1+3): ");
    scanf("%s", expression);

    double op1, op2;
    char operator;

    // Parse the expression
    if (sscanf(expression, "%lf%c%lf", &op1, &operator, &op2) != 3 || !isOperator(operator)) {
        printf("Expressão inválida.\n");
        return 1;
    }

    // Determinar o tipo de operação e calcular
    if (operator == '+' || operator == '-' || operator == '*' || operator == '/' || operator == '%' || operator == '~') {
        // Operação aritmética
        double result = calculateArithmetic(op1, operator, op2);
        printf("Resultado: %.2f\n", result);
    } else if (operator == '=' || operator == '!' || operator == '<' || operator == '>') {
        // Operação relacional
        bool result = calculateRelational(op1, operator, op2);
        printf("Resultado: %s\n", result ? "true" : "false");
    } else if (operator == '^' || operator == 'v' || operator == 'x') {
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