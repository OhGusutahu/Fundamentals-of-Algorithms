#include <stdio.h>
#include <locale.h>

/*
Exemplos:
    x = 30, y = 20, z = 10 --> Esses valores não podem formar um triângulo
    x = 20, y = 20, z = 10 --> O triângulo formado é isósceles

Entrada: três valores reais x, y, z
Processamento: analisar se todos os valores sejam menores do que a soma dos outros valores e caso sejam, identificar o tipo de triângulo
Saída: "não pode formar um triângulo" ou "triângulo equilátero" ou "triângulo isósceles" ou "triângulo escaleno"
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float x, y, z;

    printf("Insira três valores reais:\n");
    scanf("%f", &x);
    scanf("%f", &y);
    scanf("%f", &z);

    if((x>=y+z)||(y>=x+z)||(z>=x+y)){
        printf("Esses valores não podem formar um triângulo...");
    }
    else{
        if(x==y && x==z){
            printf("O triângulo formado é equilátero.");
        }
        else if(((x==y)&&(x!=z))||(y==z && y!=x)||(x==z && x!=y)){
            printf("O triângulo formado é isósceles.");
        }
        else if(x!=y && y!=z && x!=z){
            printf("O triângulo formado é escaleno.");
        }
    }

    return 0;
}
