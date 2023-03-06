#include <stdio.h>

/*  EXERCÍCIO 1 - SUBPROGRAMAÇÃO
Exemplo:        num = 10 --> dez
                num = 7  --> sete
Entrada:        numero entre 0 e 10
Processamento:  ler o numero e escreve-lo por extenso
Saida:          numero por extenso
*/

void extenso(int a) {
    switch(a) {
        case 0:
            printf("zero");
            break;
        case 1:
            printf("um");
            break;
        case 2:
            printf("dois");
            break;
        case 3:
            printf("tres");
            break;
        case 4:
            printf("quatro");
            break;
        case 5:
            printf("cinco");
            break;
        case 6:
            printf("seis");
            break;
        case 7:
            printf("sete");
            break;
        case 8:
            printf("oito");
            break;
        case 9:
            printf("nove");
            break;
        case 10:
            printf("dez");
            break;
    }
}

int main() {
    int num;

    printf("Insira um numero entre 0 e 10:");
    scanf("%d", &num);

    extenso(num);

    return 0;
}
