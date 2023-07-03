/*Utilizando uma estrutura, faça um programa que permita a entrada de nome, endereço
e telefone de 5 pessoas e os imprima em ordem alfabética.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Telefones{
    char nome[100];
    char endereco[100];
    char telefone[20];
};

int ordemAlfabetica(const void *a, const void *b){
   const struct Telefones *telefoneA = (const struct Telefones *)a;
   const struct Telefones *telefoneB = (const struct Telefones *)b;
   return strcmp(telefoneA->nome, telefoneB->nome);
}


int main(void){
    struct Telefones telefones[5];
    
    printf("\nDigite os dados tefefonicos\n");
    for(int i = 0; i < 5; i++){
        printf("\nNome: ");
        scanf(" %[^\n]%*c", telefones[i].nome);
        printf("\nEndereco: ");
        scanf(" %[^\n]%*c", telefones[i].endereco);
        printf("\nDigite o numero de telefone %d: ", i + 1);
        scanf(" %[^\n]%*c", telefones[i].telefone);
        printf("\nNome: %s\nEndereco: %s\nTelefone: %s\n", telefones[i].nome, telefones[i].endereco, telefones[i].telefone); 
        printf("--------------------------------------\n");
    }

    qsort(telefones, 5, sizeof(struct Telefones), ordemAlfabetica);

    printf("\nPalavras em ordem alfabetica:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", telefones[i].nome);
    }


    
}
