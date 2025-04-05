#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt.br.UTF-8");

    int idade;
    int ano_atual;

    printf("-----O PROGRAMA CONSIDERA A MAIOR IDADE QUE VOCÊ TERÁ NO ANO ATUAL!-----\n\n"); 

    printf("Digite sua idade: \n"); // Solicita a idade do usuário
    scanf("%d", &idade);
    
    printf("Digite o ano atual: \n"); // Solicita o ano atual
    scanf("%d", &ano_atual);

    int ano_nascimento = ano_atual - idade; // Calcula o ano de nascimento

    printf("Você nasceu em %d\n", ano_nascimento); // Exibe o ano de nascimento

    system("pause");

    return 0;
}