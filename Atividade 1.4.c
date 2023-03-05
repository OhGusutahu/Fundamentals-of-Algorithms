#include <stdio.h>
#include <locale.h>

/*
Exemplos:
    média: 6.0 --> conceito C
    média: 9.5 --> conceito A

Entrada: média final (nota)
Processamento: analisar a média e entregar seu devido conceito
Saída: conceito (A, B, C, D)
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float nota;

    printf("Insira sua média final (0.0 a 10.0):");
    scanf("%f", &nota);

    if(nota > 0 && nota < 5){
        printf("D");
    }
    else if(nota > 4.9 && nota < 7){
        printf("C");
    }
    else if(nota > 6.9 && nota < 9){
        printf("B");
    }
    else if(nota > 8.9 && nota <= 10){
        printf("A");
    }
    else{
        printf("Você não inseriu uma nota válida...");
    }

    return 0;
}
