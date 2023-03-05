#include <stdio.h>
#include <locale.h>

/*
Exemplos:
    m�dia: 6.0 --> conceito C
    m�dia: 9.5 --> conceito A

Entrada: m�dia final (nota)
Processamento: analisar a m�dia e entregar seu devido conceito
Sa�da: conceito (A, B, C, D)
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float nota;

    printf("Insira sua m�dia final (0.0 a 10.0):");
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
        printf("Voc� n�o inseriu uma nota v�lida...");
    }

    return 0;
}
