#include <stdio.h>
#include <locale.h>

/*
Exemplos:
    18 anos, 15 anos, 23 anos e 20 anos --> média de 19 anos
    20 anos, 40 anos, 26 anos e 37 anos --> média de 30 anos

Entrada: idade de quatro pessoas (idade1, idade2, idade3, idade4)
Processamento: calcular: (idade1+idade2+idade3+idade4)/4
Saída: média das idades
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int media, idade1, idade2, idade3, idade4;

    printf("Insira as idades das pessoas:\n");
    scanf("%d", &idade1);
    scanf("%d", &idade2);
    scanf("%d", &idade3);
    scanf("%d", &idade4);

    media = (idade1+idade2+idade3+idade4)/4;
    printf("A média das idades é igual a %d", media);

    return 0;
}
