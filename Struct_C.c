#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct Aluno{
    int matricula;
    char nome[50];
    int idade;
};

void exibirAluno(){

}

int main(){

    setlocale(LC_ALL,"Portugesse_Brazil.1252");
    
        
    int matricula, idade;
    const nome;

    // Criando uma lista de alunos com capacidade 3
    struct Aluno listaAlunos[3];
    int contador = 0;

    // Função para criar um novo Aluno (nome como const char*)
    struct Aluno criarAluno(int matricula, const char* nome, int idade){
        struct Aluno novoAluno;
        novoAluno.matricula = matricula;
        strcpy(novoAluno.nome, nome); // Copia o nome aluno para o campo da struct
        novoAluno.idade = idade;
        return novoAluno;
    };

    // Inserindo alunos (agora os nomes são constantes)

    listaAlunos[contador++]=criar(101,"Jão Silva",20);
    listaAluno[contador++]=criar(205,"Jorginho",64);
    
    // buscar aluno pro nome
    
    char nomeBusca[50];
    printf("digite o nome que deseja procuara: ");
    fgets(nomeBusca,50,stdin);
    nomeBusca[strcspn(nomeBusca,"\n")]="\0";// Remove o "\n gerado"


}