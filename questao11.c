#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt.br.UTF-8");

    const float pi = 3.141592; // Define o valor de pi
    float R = 2.0;
    float A = pi * pow(R, 2); // Calcula a área do círculo usando a fórmula Área = pi * r²

    printf("Raio do círculo: %.2f\n", R); // Exibe o raio do círculo
    printf("Área do círculo: %.2f\n", A); // Exibe a área do círculo

    system("pause");

    return 0;
}