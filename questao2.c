/*Crie uma estrutura representando os alunos de um determinado curso. A estrutura
deve conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda
prova e nota da terceira prova.
a) Permita ao usuário entrar com os dados de 5 alunos.
b) Encontre o aluno com maior nota da primeira prova.
c) Encontre o aluno com maior média geral.
d) Encontre o aluno com menor média geral
e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor
6 para aprovação.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int matricula;
    char nome[100];
    float n1, n2, n3;
}Alunos;

int main(void){
     Alunos alunos[5];
    int i;
    float maiorNota1 = 0;
    float maiorMedia = 0;
    float menorMedia = 0;
    float media;
    
    for(i = 1; i < 6; i++){
        printf("\nDigite os dados do aluno %d\n", i);
        printf("\nNumero da matricula: ");
        scanf("%d", &alunos[i].matricula);
        printf("\nNome: ");
        scanf("%s", alunos[i].nome);
        printf("\nDigite a primeira nota do aluno %d: ", i);
        scanf("%f", &alunos[i].n1);
        printf("\nDigite a segunda nota do aluno %d: ", i);
        scanf("%f", &alunos[i].n2);
        printf("\nDigite a terceira nota do aluno %d: ", i);
        scanf("%f", &alunos[i].n3);
        printf("\nMatricula: %d\nNome: %s\nNotas: %.1f %.1f %.1f\n", alunos[i].matricula, alunos[i].nome, alunos[i].n1, alunos[i].n2, alunos[i].n3);
        printf("\n---------------------------------------\n");
        }

    int alunoMaiorPrimeiraNota = 0;
    for(i = 1; i < 6; i++){
        if(alunos[i].n1 > maiorNota1){
            maiorNota1 = alunos[i].n1;  
            alunoMaiorPrimeiraNota = i;
        }
        }

        printf("\nO aluno com maior primeira nota: %s\n%.1f\n", alunos[alunoMaiorPrimeiraNota].nome, alunos[alunoMaiorPrimeiraNota].n1);

    int alunoMaiorMedia = 0;
    int alunoMenorMedia = 0;
    maiorMedia = (alunos[0].n1 + alunos[0].n2 + alunos[0].n3)/3; 
    menorMedia = (alunos[0].n1 + alunos[0].n2 + alunos[0].n3) / 3;

    for(i = 1; i < 6; i++){
        media = (alunos[i].n1 + alunos[i].n2 + alunos[i].n3)/3; 
        if(media > maiorMedia){
            maiorMedia = media;
            alunoMaiorMedia = i;
        }
    }
        printf("\nO aluno com maior media: %s\n%.1f\n", alunos[alunoMaiorMedia].nome, maiorMedia);

    for(i = 1; i < 6; i++){
        media = (alunos[i].n1 + alunos[i].n2 + alunos[i].n3)/3; 
        if(media < maiorMedia){
            menorMedia = media;
            alunoMenorMedia = i;

        }
    }
        printf("\nO aluno com menor media: %s\n%.1f\n", alunos[alunoMenorMedia].nome, menorMedia);

    
    for(i = 1; i < 6; i++){
        media = (alunos[i].n1 + alunos[i].n2 + alunos[i].n3)/3; 
        if(media >= 6){
            printf("\nAluno %d %s aprovado\n", i, alunos[i].nome);
        }
        if(media < 6){
            printf("\nAluno %d %s reprovado\n", i, alunos[i].nome);
        }
    }
    
    }
