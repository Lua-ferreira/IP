#!/bin/bash

# Diretório para os binários
BIN_DIR="./bin"

# Cria a pasta de binários se não existir
mkdir -p $BIN_DIR

# Compila todos os arquivos
echo "Compilando os arquivos..."
gcc -Wall -std=c99 -c poly.c -o $BIN_DIR/poly.o

gcc -Wall -std=c99 -o $BIN_DIR/pbuild pbuild.c $BIN_DIR/poly.o
gcc -Wall -std=c99 -o $BIN_DIR/pview pview.c $BIN_DIR/poly.o
gcc -Wall -std=c99 -o $BIN_DIR/psum psum.c $BIN_DIR/poly.o
gcc -Wall -std=c99 -o $BIN_DIR/psub psub.c $BIN_DIR/poly.o

echo "Compilação concluída!"

# Testes automatizados
echo "Iniciando os testes..."

# Teste: Criar polinômios
$BIN_DIR/pbuild "2x^2+1x^0" poly1
$BIN_DIR/pbuild "3x^1-2x^0" poly2

# Teste: Visualizar polinômios
echo "Visualizando poly1:"
$BIN_DIR/pview poly1
echo "Visualizando poly2:"
$BIN_DIR/pview poly2

# Teste: Somar polinômios
$BIN_DIR/psum poly1 poly2 sum
echo "Resultado da soma (sum):"
$BIN_DIR/pview sum

# Teste: Subtrair polinômios
$BIN_DIR/psub poly1 poly2 sub
echo "Resultado da subtração (sub):"
$BIN_DIR/pview sub

echo "Testes concluídos!"