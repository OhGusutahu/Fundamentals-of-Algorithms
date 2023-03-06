#include <stdio.h>

int average(int a, int b, int c, int med) {
    med = (a+b+c)/3;
    return med;
}

int main(void) {
    int nota1, nota2, nota3, media;

    printf("Insira suas notas (0,0 a 10,0):\n");
    scanf("%d", &nota1);
    scanf("%d", &nota2);
    scanf("%d", &nota3);

    media = average(nota1, nota2, nota3, media);

    if(media < 5) {
        printf("D");
    }
    else if(media>=5 && media<7) {
        printf("C");
    }
    else if(media>=7 && media<9) {
        printf("B");
    }
    else {
        printf("A");
    }

    return 0;
}

