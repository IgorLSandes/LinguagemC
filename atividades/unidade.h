/*
O arquivo foi criado em .h para ele ser uma biblioteca
*/

//Importando bibliotecas

#include <stdio.h>
#include <stdlib.h>


//Criando em model struct informações do curso, assim o arquivo fica mais compacto e leve

typedef struct unidade_curso

{
    char nomeunidade[30];
    char localizacao[50];
    char horariodefuncionamento[20];
    char telefone[15];

}unidade;
