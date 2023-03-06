#include <stdio.h>

/*  EXERCÍCIO 3 - SUBPROGRAMAÇÃO
Exemplo:        7, 15, 13, 20  --> 20
                34, 12, 18, 27 --> 34
Entrada:        idade de quatro pessoas
Processamento:  ler as idades e informar a maior
Saida:          idade da pessoa mais velha
*/

void Maior(int a, int b, int c, int d) {
    if(a>b && a>c && a>d) {
        printf("O maior e %d", a);
    }
    else if(b>a && b>c && b>d) {
        printf("O maior e %d", b);
    }
    else if(c>a && c>b && c>d) {
        printf("O maior e %d", c);
    }
    else if(d>a && d>b && d>c) {
        printf("O maior e %d", d);
    }
}

int main() {
    int age1, age2, age3, age4;

    printf("Insira as idades de quatro pessoas:\n");
    scanf("%d", &age1);
    scanf("%d", &age2);
    scanf("%d", &age3);
    scanf("%d", &age4);

    Maior(age1, age2, age3, age4);

    return 0;
}
