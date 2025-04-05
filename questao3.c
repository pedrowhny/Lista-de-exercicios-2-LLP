#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt.br.UTF-8");

    int v1 = 4; 
    int v2 = 5;
    int v3 = 8;

    printf("Número 1: %d\n", v1); // Exibe o primeiro número
    printf("Número 2: %d\n", v2); // Exibe o segundo número
    printf("Número 3: %d\n", v3); // Exibe o terceiro número

    printf("Soma dos números: %d\n", v1 + v2 + v3); // Exibe a soma dos números

    system("pause");

    return 0;
}