/*
O arquivo foi criado em .h para ele ser uma biblioteca
*/

//Importando bibliotecas

#include <stdio.h>
#include <stdlib.h>

//Criando em model struct informações do curso, assim o arquivo fica mais compacto e leve

typedef struct dados_curso
{
char nomedocurso[30];
char descricao[300];
char cargahoraria[10];
char datadeinicio[10];
char datatermino[10];
char preco[10];

}curso;

