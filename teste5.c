#include <stdio.h>
#include <string.h>
void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}


void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}


int main()
{
    int idade1,idade2;
    double salario, altura;
    char genero;
    char nome1[50],nome2[50];
    printf("digite o valor da idade: ");
    scanf("%d", &idade1);
    printf("digite o nome: ");
    limpar_entrada();
    ler_texto(nome1, 50);


    printf("digite o valor da idade2: ");
    scanf("%d", &idade2);
    printf("digite o nome2: ");
    limpar_entrada();
    ler_texto(nome2,50);


    printf("O nome da pessoa e: %s\n", nome1);
    printf("A idade da pessoa e de: %d\n", idade1);


    printf("O nome da pessoa e: %s\n", nome2);
    printf("A idade da pessoa e de: %d\n", idade2);

    return 0;
}
