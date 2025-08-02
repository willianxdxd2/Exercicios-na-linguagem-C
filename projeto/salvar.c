#include <stdio.h>

// Função para limpar o buffer de entrada
void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    double C, F;
    char resp;

    do {
        printf("Digite a temperatura em Celsius: ");
        scanf("%lf", &C);
        F = 9.0 * C / 5.0 + 32.0;
        printf("Equivalente em Fahrenheit: %.1lf\n", F);

        // Solicita ao usuário se deseja repetir
        printf("Deseja repetir (s/n)? ");
        limpar_entrada(); // Garante que o buffer está limpo
        scanf("%c", &resp);
    } while (resp == 's');

    return 0;
}
