#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt.br.UTF-8");

    int numero_inteiro = 10;
   
    int multiplicacao = numero_inteiro << 1; // Multiplica o número por 2 usando deslocamento de bits
    int divisao = numero_inteiro >> 1; // Divide o número por 2 usando deslocamento de bits

    printf("Número digitado: %d\n", numero_inteiro); // Exibe o número digitado
    printf("Número multiplicado por 2: %d\n", multiplicacao); // Exibe o resultado da multiplicação
    printf("Número dividido por 2: %d\n", divisao); // Exibe o resultado da divisão

    system("pause");

    return 0;
}