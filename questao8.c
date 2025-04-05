#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt.br.UTF-8");

    float C = 22.0;
    const float F = C * (9.0 / 5.0) + 32.0; // Fórmula de conversão de Celsius para Fahrenheit

    printf("Temperatura média de Brasília em Celsius: %.2f\n", C); // Exibe a temperatura em Celsius
    printf("Temperatura média de Brasília em Fahrenheit: %.2f\n", F); // Exibe a temperatura em Fahrenheit

    system("pause");

    return 0;
}