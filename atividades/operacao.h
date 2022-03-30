/*
Importando bibliotecas, inclusive a que criei agora em .h
*/

#include <stdio.h>
#include <stdlib.h>
#include "curso.h"
#include "unidade.h"

//aqui estou criando uma ''main'' sem retorno

void gravarcursos() {

/*
O tipo FILE é utlizado para criar arquivos.
Este arquivo deve ser alocado em memória, portanto, sua
criação deve ser feita como ponteiro
*/

    FILE *arquivo;

/*O fopen é responsavel por criar um arquivo, aqui ele esta criando um arquivo txt, onde será
armazenado a informação dada pelo usuário
Este arquivo fica disponível em memória até o fechamento do arquivo
*/
  arquivo = fopen("dados.txt", "w");
    if(arquivo==NULL){
        printf("Arquivo não encontrado.");
        exit(1);
    }


/*
Criando um ponteiro
aonde vai ser alocado as informações
*/

curso cur, *pcur;
unidade uni, *puni;

pcur = &cur;
puni = &uni;

/*
Interagindo com o usuário, e salvando as informações dada pelo mesmo
Usando fgets por conta que ele consegue identificar simbolos e espaço
*/

printf("\nDigite o nome do curso que você deseja criar.\n");
fgets(pcur->nomedocurso,30,stdin);

printf("\nDigite a descrição do curso.\n");
fgets(pcur->descricao,300,stdin);

printf("\nDigite a carga horária do curso.\n");
fgets(pcur->cargahoraria,20,stdin);

printf("\nDigite a data de inicio do curso.\n");
fgets(pcur->datadeinicio,15,stdin);

printf("\nDigite a data de término do curso.\n");
fgets(pcur->datatermino,15,stdin);

printf("\nDigite o valor do curso.\n");
fgets(pcur->preco,20,stdin);

printf("\nDigite a unidade do curso.\n");
fgets(puni->nomeunidade,30,stdin);

printf("\nDigite a localização.\n");
fgets(puni->localizacao,50,stdin);

printf("\nDigite o horário de funcionamento.\n");
fgets(puni->horariodefuncionamento,50,stdin);

printf("\nDigite o telefone da unidade.\n");
fgets(puni->telefone,15,stdin);


//gravar o nome do arquivo

fprintf(arquivo,pcur->nomedocurso);
fprintf(arquivo,pcur->descricao);
fprintf(arquivo,pcur->cargahoraria);
fprintf(arquivo,pcur->datadeinicio);
fprintf(arquivo,pcur->datatermino);
fprintf(arquivo,pcur->preco);
fprintf(arquivo,puni->nomeunidade);
fprintf(arquivo,puni->localizacao);
fprintf(arquivo,puni->horariodefuncionamento);
fprintf(arquivo,puni->telefone);


//tirar o arquivo da memoria e fechar o arquivo
fclose(arquivo);



}
