#include <stdio.h>

void triangle(int a, int b, int c) {
    if(a>=b+c || b>=a+c || c>=a+b) {
        printf("valores nao formam um triangulo...");
    }
    else {
        if(a==b && b==c){
            printf("O triangulo formado eh equilatero.");
        }
        else if(((a==b)&&(a!=c))||(b==c && b!=a)||(a==c && a!=b)){
            printf("O triangulo formado eh isosceles.");
        }
        else if(a!=b && b!=c && a!=c){
            printf("O triangulo formado eh escaleno.");
        }
    }
}

int main(void) {
    int x, y, z;

    printf("Insira os valores de x, y e z:\n");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    triangle(x,y,z);

    return 0;
}
