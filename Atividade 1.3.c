#include <stdio.h>
#include <locale.h>

/*
Exemplos:
    x = 30, y = 20, z = 10 --> Esses valores n�o podem formar um tri�ngulo
    x = 20, y = 20, z = 10 --> O tri�ngulo formado � is�sceles

Entrada: tr�s valores reais x, y, z
Processamento: analisar se todos os valores sejam menores do que a soma dos outros valores e caso sejam, identificar o tipo de tri�ngulo
Sa�da: "n�o pode formar um tri�ngulo" ou "tri�ngulo equil�tero" ou "tri�ngulo is�sceles" ou "tri�ngulo escaleno"
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float x, y, z;

    printf("Insira tr�s valores reais:\n");
    scanf("%f", &x);
    scanf("%f", &y);
    scanf("%f", &z);

    if((x>=y+z)||(y>=x+z)||(z>=x+y)){
        printf("Esses valores n�o podem formar um tri�ngulo...");
    }
    else{
        if(x==y && x==z){
            printf("O tri�ngulo formado � equil�tero.");
        }
        else if(((x==y)&&(x!=z))||(y==z && y!=x)||(x==z && x!=y)){
            printf("O tri�ngulo formado � is�sceles.");
        }
        else if(x!=y && y!=z && x!=z){
            printf("O tri�ngulo formado � escaleno.");
        }
    }

    return 0;
}
