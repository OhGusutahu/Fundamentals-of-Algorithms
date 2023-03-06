#include <stdio.h>
#include <assert.h>

void password(int a){
    if(a == 1234) {
        printf("Acesso autorizado");
    }
    else {
        printf("Acesso nao autorizado");
    }

}

int main(void) {

    int senha;

    printf("Insira a senha:");
    scanf("%d", &senha);

    password(senha);

    return 0;
}
