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
char cargahoraria[20];
char datadeinicio[15];
char datatermino[15];
char preco[20];

}curso;

