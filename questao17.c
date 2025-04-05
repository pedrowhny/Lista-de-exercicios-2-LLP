#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt.br.UTF-8");

    unsigned int numero; // Número inteiro não negativo

    printf("Digite um número inteiro não negativo: "); // Solicita um número inteiro não negativo
    scanf("%u", &numero); 

    printf("Numero original (decimal): %u\n", numero); // Exibe o número original
    printf("Complemento bit a bit (decimal): %u\n", ~numero); // Exibe o complemento bit a bit do número

    system("pause");

    return 0;
}