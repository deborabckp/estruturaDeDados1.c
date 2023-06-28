#include <stdio.h>

struct Pessoa{
    char nome[100];
    int idade;
    char endereco[100];
};


int main(void){

struct Pessoa pessoa;

printf("Digite os dados:\t");
scanf("%s %d %[^\n]s", &pessoa.nome, &pessoa.idade, &pessoa.endereco);
printf("\nNome:%s\nIdade:%d\nEndereco:%s\n",pessoa.nome, pessoa.idade, pessoa.endereco);

} 
