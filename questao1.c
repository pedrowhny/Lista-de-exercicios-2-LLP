#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt.br.UTF-8");

    int i = 10;
    int antes = 9;
    int depois = 11;

    printf("Número: %d\n", i); // Exibe o número
    printf("Número antes: %d\n", antes); // Exibe o número antecessor
    printf("Número depois: %d\n", depois); // Exibe o número sucessor

    system("pause");

    return 0;
}