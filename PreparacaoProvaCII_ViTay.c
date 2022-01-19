#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Autoras: Tayna Souza Malaquias e Ana Vitoria Silva;
//Data: 01/12/2021;
//Resumo: Atividade feita com o intuito de fixar o conteudo de matrizes, utilizando numeros randomicos;


void vetor_randomico(double vetor[2])
{
    //Funcao retorna vetor randomico;
    printf("\nVeja o vetor que criamos randomicamente: \n");

    for (int i = 0; i < 2; i++)
    {
        vetor[i] = (rand() % 11) * 0.1;
        printf("Vetor [%d] = [%.1f]\n", i, vetor[i]);
    }
}

void matriz_randomica(double matriz1[2][2])
{
    //Funcao retorna matriz randomico;
    printf("\nVeja a matriz que criamos randomicamente:\n\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matriz1[i][j] = (rand() % 11) * 0.1;
            printf("|    matriz[%d][%d] = [%.1f]    |", i, j, matriz1[i][j]);
        }
        printf("\n");
    }
}

void matriz_multiplica1(double matriz2[2][2], double matriz1[2][2], double vetor[2])
{
    //Funcao multiplica PRIMEIRA posicao do vetor randomica por toda matriz randomica, gerando uma nova matriz;
    printf("\nAgora veja os valores da matriz randomica multiplicada pela primeira posicao do vetor: \n\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matriz2[i][j] = matriz1[i][j] * vetor[0];
            printf("|    matriz[%d][%d] = [%.1f]    |", i, j, matriz2[i][j]);
        }
        printf("\n");
    }
}

void matriz_multiplica2(double matriz3[2][2], double matriz1[2][2], double vetor[2])
{
    //Funcao multiplica SEGUNDA posicao do vetor randomica por toda matriz randomica, gerando uma nova matriz;
    printf("\nAgora veja os valores da matriz randomica multiplicada pela segunda posicao do vetor: \n\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matriz3[i][j] = matriz1[i][j] * vetor[1];
            printf("|    matriz[%d][%d] = [%.1f]    |", i, j, matriz3[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    printf("\n|**Alunas: Tayna e Ana Vitoria**|\n");
    printf("|*******************************|\n");
    printf("|**Bem vindo a ViTay Sistemas!**|\n");
    printf("|*******************************|\n\n");

    double vetor[2];
    double matriz1[2][2];
    double matriz2[2][2];
    double matriz3[2][2];

    srand(time(0)); // gera semente para números randomicos;

    vetor_randomico(vetor);

    matriz_randomica(matriz1);

    matriz_multiplica1(matriz2, matriz1, vetor);

    matriz_multiplica2(matriz3, matriz1, vetor);
}
