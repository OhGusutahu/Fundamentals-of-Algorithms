#include <stdio.h>
#include <locale.h>

/*
Exemplos:
    senha: 1234 --> "Acesso autorizado"
    senha: 4321 --> "Acesso negado"

Entrada: senha
Processamento: Comparar a senha inserida com o valor 1234
Saída: "Acesso autorizado" ou "Acesso negado"
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int inserida;
    printf("Inserir a senha de acesso:");
    scanf("%d", &inserida);

    if(inserida == 1234){
        printf("Acesso autorizado");
    }
    else{
        printf("Acesso negado");
    }

    return 0;
}
