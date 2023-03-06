#include <stdio.h>

/*  EXERCÍCIO 2 - SUBPROGRAMAÇÃO
Exemplo:        7 laranjas  --> 0.35*7=2.45
                15 laranjas --> 0.3*15=4.50
Entrada:        numero de laranjas a comprar
Processamento:  se numero de laranjas < 12 --> 0.35 cada; se numero de laranjas >= 12 --> 0.3 cada
Saida:          total da compra
*/

float preco(int a, float b, float c, float d) {
    if(a<12) {
        b=a*c;
        return b;
    }
    else {
        b=a*d;
        return b;
    }
}

int main() {
    int numOrange;
    float total, precoNormal = 0.35, precoPromo = 0.3;

    printf("~~ PROMOCAO DE LARANJAS ~~\nPreco normal -- 0.35\nAo comprar uma duzia ou mais -- 0.30\n\nQuantas deseja comprar?");
    scanf("%d", &numOrange);

    printf("O total da compra e de:%.2f", preco(numOrange, total, precoNormal, precoPromo));

    return 0;
}
