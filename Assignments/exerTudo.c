#include <stdio.h>

int main() {

/* Exercício 1
exemplos:       [1, 3, 5, 4, 2, 8, 7] --> vetor: [0.125, 0.375, 0.625, 0.5, 0.25, 1, 0.875]
                [1, 6, 9, 3, 4, 6, 2] --> vetor: [0.111, 0.667, 1, 0.333, 0.444, 0.667, 0.222]
entrada:        valores dos elementos do vetor
processamento:  encontrar o maior valor e dividir todos por esse valor
saída:          vetor com valores divididos
*/

    printf("Exercicio 1\n\n");
    float vetor7[7];
    float vetor7div[7];
    float maiorVetor = -9999999999999; //Para que o divisor não seja igual a zero

    for(int i=0; i<7; i++) {
        printf("Insira o valor %d do vetor: ", i+1);
        scanf("%f", &vetor7[i]);
    }

    for(int i=0; i<7; i++) {
        if((vetor7[i] > maiorVetor) && (vetor7[i] != 0)) {
            maiorVetor = vetor7[i];
        }
    }

    for(int i=0; i<7; i++) {
        vetor7div[i] = vetor7[i] / maiorVetor;
    }

    printf("\nOs valores do vetor divididos pelo maior valor sao: [ ");
    for(int i=0; i<7; i++) {
        printf("%.3f ", vetor7div[i]);
    }
    printf("]");

    printf("\n\n~~~~~~~~~~~~~~~~~~\n\n");

/* Exercício 2
exemplos:       A = [1, 3, 5, 7, 9], B = [1, 2, 3, 4, 5, 6, 7] --> Elementos comuns: 1, 3, 4, 7
                A = [2, 4, 3, 9, 5], B = [1, 2, 8, 4, 6, 7, 3] --> Elementos comuns: 2, 4, 3
entrada:        valores dos vetores A e B
processamento:  Encontrar os elementos comuns entre os dois
saída:          Elementos comuns
*/

    printf("Exercicio 2\n\n");
    float vetorA[5];
    float vetorB[7];

    for(int i=0; i<5; i++) {
        printf("Insira o valor %d do vetor A: ", i+1);
        scanf("%f", &vetorA[i]);
    }
    for(int i=0; i<7; i++) {
        printf("Insira o valor %d do vetor B: ", i+1);
        scanf("%f", &vetorB[i]);
    }

    printf("\nOs elementos comuns aos dois vetores sao: ");
    for(int i=0; i<5; i++) {
        for(int j=0; j<7; j++) {
            if(vetorA[i] == vetorB[j]) {
                printf("%.3f ", vetorA[i]);
            }
        }
    }

    printf("\n\n~~~~~~~~~~~~~~~~~~\n\n");

/* Exercício 3
exemplos:           [ 1,  2,  3]
                M = [ 4,  5,  6] --> 78
                    [ 7,  8,  9]
                    [10, 11, 12]

entrada:        Valores dos elementos matriz
processamento:  Somar os elementos da matriz
saída:          A soma dos elementos
*/

    printf("Exercicio 3\n\n");
    float matriz4_3[4][3];
    float matrizSoma = 0;

    for(int i=0; i<4; i++) {
        for(int j=0; j<3; j++) {
            printf("Insira o valor do elemento da linha %d, coluna %d: ", i+1, j+1);
            scanf("%f", &matriz4_3[i][j]);

            matrizSoma = matrizSoma+matriz4_3[i][j];
        }
    }

    printf("\nA soma desses elementos e igual a: %.2f", matrizSoma);

    printf("\n\n~~~~~~~~~~~~~~~~~~\n\n");

/* Exercício 4
exemplos:           [1, 2, 3]         [0.11, 0.22, 0.33]
                M = [4, 5, 6] --> M = [0.44, 0.55, 0.67]
                    [7, 8, 9]         [0.78, 0.89, 1.00]

entrada:        valores dos elementos da matriz
processamento:  encontrar o maior numero da diagonal principal e dividir os valores por esse numero
saída:          Os elementos divididos
*/

    printf("Exercicio 4\n\n");
    float matrizM[3][3];
    float diagM = -99999999999999; //Para que o divisor não seja igual a zero

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            printf("Insira o valor do elemento da linha %d, coluna %d: ", i+1, j+1);
            scanf("%f", &matrizM[i][j]);
        }
    }

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(i == j) {
                if((matrizM[i][j] > diagM) && (matrizM[i][j] != 0)) {
                    diagM = matrizM[i][j];
                }
            }
        }
    }

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            matrizM[i][j] = matrizM[i][j] / diagM;
        }
    }

    printf("\nA matriz alterada e: M = [ ");
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            printf("%.2f ", matrizM[i][j]);
        }
    }
    printf("]");

    printf("\n\n~~~~~~~~~~~~~~~~~~\n\n");

    return 0;
}

