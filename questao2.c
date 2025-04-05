#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt.br.UTF-8");

    float i = 10.5;
    const int quinta_parte = 5;
    
    printf("Quinta parte de %.2f:\n%.2f\n", i, i / quinta_parte); // Exibe a quinta parte do número real

    system("pause");

    return 0;
}