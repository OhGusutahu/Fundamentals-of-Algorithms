#include <stdio.h>

int media(a, b, c, d, med) {
    med = (a+b+c+d)/4;
    return med;
}

int main(void) {
    int i1, i2, i3, i4, mediaI;

    printf("Insira a idade de quatro pessoas:\n");
    scanf("%d", &i1);
    scanf("%d", &i2);
    scanf("%d", &i3);
    scanf("%d", &i4);

    printf("a media das suas idades e %d", media(i1, i2, i3 ,i4,mediaI));

    return 0;
}
