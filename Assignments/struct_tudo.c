#include <stdio.h>

typedef struct pessoa { //struct exercicio 1
    int RA;
    char nome[30];
    char curso[30];
    int serie;
};

typedef struct tempo { //struct exercicio 2
    int horas;
    int minutos;
};

typedef struct alunos { //struct exercicio 3
    int RA;
    char nome[30];
    float nota1, nota2, nota3, media;
};

typedef struct eletrodom { //struct exercicio 4
    char nome[17]; //máximo 15 letras, espaço extra para '\n' e '\0'
    float potencia, tempoAtivo, consumo;
};

void flush_in()
{
   int ch;

   while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){}
}

int main() {

/* Exercício 1
exemplos:           129658, Gustavo, Ciencia da Computacao, 1
                    129655, Laura, Direito, 1
                Ex: 128546, Igor, Engenharia Mecanica, 2        --> Alunos do primeiro ano de Ciencia da Computacao: 129658, Gustavo; 129432, Giovana
                    128769, Paula, Engenharia Civil, 2
                    129432, Giovana, Ciencia da Computacao, 1
entrada:        Informações dos alunos (RA, nome, curso e série)
processamento:  Analisar quais são do curso de Ciência da Computação e da primeira série
saída:          Alunos do curso de Ciência da Computação e da primeira série
*/

    struct pessoa aluno[5];
    int nomeLen, cursoLen;

    for(int i=0; i<5; i++) {
        printf("Insira o RA do aluno: ");
        scanf("%d", &aluno[i].RA);
        flush_in();
        printf("Insira o nome do aluno: ");
        fgets(aluno[i].nome,30,stdin);
        nomeLen = strlen(aluno[i].nome);
        aluno[i].nome[nomeLen-1] = '\0';
        printf("Insira o curso do aluno: ");
        fgets(aluno[i].curso,30,stdin);
        cursoLen = strlen(aluno[i].curso);
        aluno[i].curso[cursoLen-1] = '\0';
        printf("Insira a serie que o aluno esta cursando: ");
        scanf("%d", &aluno[i].serie);
        flush_in();
    }

    printf("Alunos do primeiro ano de Ciencia da Computacao:\n");
    for(int i=0; i<5; i++) {
        if((strcmp(aluno[i].curso, "Ciencia da Computacao")==0) && (aluno[i].serie==1)) {
            printf("RA: %d\nNome: %s\n\n", aluno[i].RA, aluno[i].nome);
        }
    }

    printf("\n\n|----------------------------------|\n\n");

/* Exercício 2
exemplos:       131 minutos --> 2 hora(s) e 11 minuto(s)
                67 minutos  --> 1 hora(s) e 7 minuto(s)
entrada:        Tempo em minutos
processamento:  Dividir os minutos em 60 para encontrar as horas e manter o resto
saída:          Tempo em horas e minutos
*/

    struct tempo medido;
    int atualMin;

    printf("Insira o tempo em minutos: ");
    scanf("%d", &atualMin);

    medido.horas = atualMin / 60;
    medido.minutos = atualMin % 60;

    printf("O tempo em horas e minutos: %d hora(s) e %d minuto(s).", medido.horas, medido.minutos);

    printf("\n\n|----------------------------------|\n\n");

/* Exercício 3
exemplos:      RA: 10; Gustavo; notas: 9, 7, 7.5   --> Aprovado!
               RA: 11; Leonardo; notas: 6, 8, 6.7  --> Aprovado!      Maior nota da primeira prova: Gustavo, 9
               RA: 12; Samuel; notas: 8, 7.3, 6.5  --> Aprovado!  --> Maior media: Gustavo, 7.83
               RA: 13; Lucas; notas: 7.3, 3.2, 4.1 --> Reprovado!     Menor media: Eduardo, 4.26
               RA: 14; Eduardo; notas: 4, 3.5, 5.3 --> Reprovado!

entrada:       Informações dos alunos (matrícula/RA, nome, notas das três provas)
processamento: Ler as informações e calcular as médias
saída:         Maior nota da 1a prova, maior media e menor media e caso o aluno foi aprovado ou reprovado
*/

    struct alunos fundAlgo[5];
    float maiorP1 = 0, maiorMedia = 0, menorMedia = 10;
    int len;


    for(int i=0; i<5; i++) {
        printf("Insira a matricula do aluno %d: ", i+1);
        scanf("%d", &fundAlgo[i].RA);
        flush_in();
        printf("Insira o nome do aluno %d: ", i+1);
        fgets(fundAlgo[i].nome, 30, stdin);
        len = strlen(fundAlgo[i].nome);
        fundAlgo[i].nome[len-1] = '\0';
        printf("Insira as tres notas do aluno %d separados por virgula: ", i+1);
        scanf("%f, %f, %f", &fundAlgo[i].nota1, &fundAlgo[i].nota2, &fundAlgo[i].nota3);
        flush_in();
    }

    for(int i=0; i<5; i++) {
        fundAlgo[i].media = (fundAlgo[i].nota1+fundAlgo[i].nota2+fundAlgo[i].nota3)/3;

        if(fundAlgo[i].nota1 > maiorP1) {
            maiorP1 = fundAlgo[i].nota1;
        }
        if(fundAlgo[i].media > maiorMedia) {
            maiorMedia = fundAlgo[i].media;
        }
        if(fundAlgo[i].media < menorMedia) {
            menorMedia = fundAlgo[i].media;
        }
    }
    printf("\n");
    for(int i=0; i<5; i++) {
        if(fundAlgo[i].nota1 == maiorP1) {
            printf("Maior nota da primeira prova:\nAluno: %s, nota: %.2f.\n", fundAlgo[i].nome, maiorP1);
        }
        if(fundAlgo[i].media == maiorMedia) {
            printf("Maior media:\nAluno: %s, media: %.2f.\n", fundAlgo[i].nome, maiorMedia);
        }
        if(fundAlgo[i].media == menorMedia) {
            printf("Menor media:\nAluno: %s, media: %.2f.", fundAlgo[i].nome, menorMedia);
        }
    }
    printf("\n");
    for(int i=0; i<5; i++) {
        if(fundAlgo[i].media >= 6) {
            printf("\nAluno %s, RA: %d\nAprovado!", fundAlgo[i].nome, fundAlgo[i].RA);
        }
        else {
            printf("\nAluno %s, RA: %d\nReprovado!", fundAlgo[i].nome, fundAlgo[i].RA);
        }
    }

    printf("\n\n|----------------------------------|\n\n");

/* Exercício 4
exemplos:       geladeira, 0.25kW, 20h                                        --> 26.18%
                TV, 0.2kW, 5h                                                 --> 5.24%
                lava-roupas, 1.5kW, 1h     --> 30 dias; consumo total: 573kWh --> 7.85%
                notebook, 0.25kW, 8h                                          --> 10.47%
                ar condicionado, 1.2kW, 8h                                    --> 50.26%
entrada:        Nome, potencia e tempo ativo de cinco eletrodomesticos; e tempo em dias de consumo
processamento:  Calcular o consumo total e em porcentagem de cada eletrodomestico
saída:          Consumo total e a procentagem de consumo de cada eletrodomestico
*/

    struct eletrodom casa[5];
    int len1, t;
    float consumoTotal;

    for(int i=0; i<5; i++) {
        printf("Insira o nome do eletrodomestico: ");
        fgets(casa[i].nome,17,stdin);
        flush_in();
        len1 = strlen(casa[i].nome);
        casa[i].nome[len1-1] = '\0';
        printf("Insira a potencia do(a) %s em kW: ", casa[i].nome);
        scanf("%f", &casa[i].potencia);
        flush_in();
        printf("Insira o tempo ativo do(a) %s em horas por dia: ", casa[i].nome);
        scanf("%f", &casa[i].tempoAtivo);
        flush_in();
    }
    printf("\nQuanto tempo em dias do consumo? ");
    scanf("%d", &t);

    for(int i=0; i<5; i++) {
        casa[i].consumo = casa[i].potencia * casa[i].tempoAtivo * t;
    }

    consumoTotal=0;
    for(int i=0; i<5; i++) {
        consumoTotal = consumoTotal + casa[i].consumo;
    }
    printf("\nO consumo total da casa eh de: %.2f kWh\n", consumoTotal);

    printf("O consumo relativo de cada eletrodomestico eh de: ");
    for(int i=0; i<5; i++) {
        casa[i].consumo = (casa[i].consumo*100)/consumoTotal;
        printf("\n%s: %.2f %%", casa[i].nome, casa[i].consumo);
    }

    return 0;
}
