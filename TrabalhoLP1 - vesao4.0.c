#include <stdio.h>
#include <stdlib.h>
#include <string.h> // MANIPULAR STRING
#include <locale.h> // Biblioteca para deixar em portugu�s

// ======= DEFINES ========
#define MAX_CHAR 40
#define MAX_TEL 15
#define MAX_NUM 5

// ======= GLOBAIS ========
typedef struct Contato{
    char nome[MAX_CHAR];
    int dia_nascimento, mes_nascimento, ano_nascimento;
    char rua[MAX_CHAR], numero[MAX_NUM], bairro[MAX_CHAR], cidade[MAX_CHAR], estado[MAX_CHAR];
    char numero_telefone[MAX_TEL];
    struct Contato *prox;
} contato;

// ======= FUN��ES =======
/*int Menu_Inicial(int op) // FUN��O DO MENU PRINCIPAL
{
    switch(op){
    case 1: // Contiuar o programa
        break;
    case 2:
        Creditos();
        break;
    case 3:
        printf("Nada ainda...\n");
        system("pause");
        break;
    case 4:
        printf("Nada ainda...\n");
        system("pause");
        break;
    default:
        printf("Op��o inv�lida\n");
        system("pause");
        break;
    }
    system("cls");
}
*/
void Creditos() // FUN��O CR�DITOS
{
    system("cls");
    printf("\n ====================CREDITOS===================");
    printf("\n TRABALHO UNIVERSIT�RIO 2� SEMESTRE             ");
    printf("\n UNIVERSIDADE DO ESTADO DA BAHIA(UNEB)          ");
    printf("\n Alunos: Gabriel Cerqueira Santos Rodrigues     ");
    printf("\n         Luiz Vin�cius Pereira de Oliveira Souza");
    printf("\n Professor: Ernesto Massa                       ");
    printf("\n Discipina: Linguagem de Programa��o I(LPI)     ");
    printf("\n                                                ");
    printf("\n ===============================================");

    printf("\n\n");

    printf("\n ��������������#���������#���������#�������������������������������������������������������������������������������������");
    printf("\n ���������������####������####�����#####���������������������������������������������������������������������������������");
    printf("\n �����������������####�����####������####��������������������������������������������������������������������������������");
    printf("\n ��������������#######���####@#���#######��������������������������������������������������������������������������������");
    printf("\n ���������������#####�����####�����#####���������������������������������������������������������������������������������");
    printf("\n ������������#############################�������������������������������������������������������������������������������");
    printf("\n ������������#############################�������������������������������������������������������������������������������");
    printf("\n ������������#############################�����������������������������������������������������������������������###�����");
    printf("\n ������������######��#############�#######��������������������##���������##�����##��������##�����#########�����##����###�");
    printf("\n ������������####�##�##�##########��######��������������������##���������##����#####������##�����#########�����##�����##�");
    printf("\n ������������#############################��������������������##���������##����##�###�����##�����###�����������##�����##�");
    printf("\n ������������#####�#�############��#�#####��������������������##���������##����##���###���##�����#######�������#######���");
    printf("\n ������������##�##########################��������������������##���������##����##����###��##�����#######�������##�����##�");
    printf("\n ������������##��######################�##��������������������##���������##����##������#####�����###�����������##�����###");
    printf("\n ������������##��#########################��������������������###�������###����##�������####�����##########����##�����###");
    printf("\n ������������##������������##����������###���������������������###�����###�����##��������###�����##########����#########�");
    printf("\n ������������##������������##����������###���������������������###�����###�����##��������###�����##########����#########�");
    printf("\n �#����#####�##�##########�############�##�#####����#�������������####���������������������������������������������������");
    printf("\n �########################################�########@@��������������������������������������������������������������������");
    printf("\n ###########�######��#####�#######�#######�####@##@@@#�������#############################���############################");
    printf("\n �#####��###�######��##�##########��##########�#####���������������������������������������������������������������������");
    printf("\n ������#####�#############################�####��������������������������������������������������������������������������");
    printf("\n �����#####��#######�#############�#######��#@@##������������������������������������������������������������������������");
    printf("\n �����##�###�##############�#############��###@@##�����������������������������������������������������������������������");
    printf("\n �����#########�#################################������������������������������������������������������������������������");
    printf("\n ������#############����#######�����############�������������������������������������������������������������������������");
    printf("\n ��������#####################################���������������������������������������������������������������������������");
    printf("\n ����������#################################�����������������������������������������������������������������������������");
    printf("\n ��������������##########################��������������������������������������������������������������������������������");
    printf("\n ����������������###�#############��##�����������������������������������������������������������������������������������");
    printf("\n �����������������##�������##��������#�����������������������������������������������������������������������������������");
    printf("\n ������������������������������������������������������������������������������������������������������������������������");

    printf("\n\n");

    system("pause");
}
/*
int Menu_Contatos(int op2,contato **contatos)
{
	contato *lista = *contatos;
    switch(op2){
    case 1:
        Adicionar_Contato(&lista);
        break;
    case 2:
        Remover_Contato();
        break;
    case 3:
        Buscar_Contato();
        break;
    case 4:
        Exibir_Todos(lista);
        break;
    case 5:
        Atualizar_Contato();
        break;
    case 6:
        printf("\n Saindo do programa...\n");
        system("pause");
        exit(0);
        break;
    default:
        printf("\n Op��o inv�lida...");
        system("pause");
    }
}
*/
void Adicionar_Contato(contato **lista) // FUN��O ADD CONTATO
{
    system("Cls");
    getchar(); //  para pegar o espa�o e n�o sujar outras vari�veis

    contato *novo_contato = (contato *)malloc(sizeof(contato)); // CRIA UMA NOVA STRUCT PARA ADD UM USUARIO
    /*if(novo_contato)
    	printf("alocou memoria\n");
    else
    	printf("nao alocou memoria\n");*/

    // --PEDINDO NOME / DATA DE NASCIMENTO--
    printf("\n Digite seu nome: ");
    fgets(novo_contato->nome, MAX_CHAR, stdin);
    novo_contato->nome[strcspn(novo_contato->nome, "\n")] = '\0';

    printf("\n Digite sua data de nascimento: (dia/m�s/ano)\t");
    scanf("%d/%d/%d", &novo_contato->dia_nascimento, &novo_contato->mes_nascimento, &novo_contato->ano_nascimento);
    getchar();

    /*printf("%d/%d/%d", novo_contato->dia_nascimento, novo_contato->mes_nascimento, novo_contato->ano_nascimento);
    getch();*/
    // --PEDINDO ENDERE�O--
    printf("\n DIGITE O ENDERE�O DO CONTATO: ");

    printf("\n Rua:    ");
    fgets(novo_contato->rua,MAX_CHAR,stdin);
    novo_contato->rua[strcspn(novo_contato->rua, "\n")] = '\0';

    printf("\n N�mero: ");
    fgets(novo_contato->numero,MAX_CHAR,stdin);
    novo_contato->numero[strcspn(novo_contato->numero, "\n")] = '\0';

    printf("\n Bairro: ");
    fgets(novo_contato->bairro,MAX_CHAR,stdin);
    novo_contato->bairro[strcspn(novo_contato->bairro, "\n")] = '\0';

    printf("\n Cidade: ");
    fgets(novo_contato->cidade,MAX_CHAR,stdin);
    novo_contato->cidade[strcspn(novo_contato->cidade, "\n")] = '\0';

    printf("\n Estado: ");
    fgets(novo_contato->estado,MAX_CHAR,stdin);
    novo_contato->estado[strcspn(novo_contato->estado, "\n")] = '\0';

    // --------------------
    if(*lista==NULL)
    {
    	*lista = novo_contato;
		//printf("gabrielll");
	}
    else{
		novo_contato->prox = *lista;
		*lista = novo_contato;
		//printf("xdxdxd");
	}
	printf("\n\n Contato ADICIONADO com sucesso!\n");
	system("pause");
}

void Remover_Contato() // FUN��O DEL CONTATO
{
    system("Cls");
    printf("\n Remover Contato(NADA AINDA)\n");
    system("pause");
}

void Buscar_Contato(contato *lista) // FUN��O BUSCAR CONTATO
{
    int mesmo = 1;
    char nome[MAX_CHAR];
    contato *buscado_contato = lista;

    system("Cls");
    getchar();

    printf("Digite o NOME do contato que deseja:\t");
    fgets(nome, MAX_CHAR, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    while(buscado_contato != NULL){
        if(strcasecmp(nome, buscado_contato->nome) == 0){
            printf("PALAVRA IGUAL\n");
            mesmo = 0;
            printf("\n =========| CONTATO DE %s |=========", nome);
            printf("\n Nome do Contato    : %s", buscado_contato->nome);
			printf("\n N�mero de telefone : %s", buscado_contato->numero);
			printf("\n ENDERE�O DE CONTATO:                 ");
			printf("\n - Estado: %s", buscado_contato->estado);
			printf("\n - Cidade: %s", buscado_contato->cidade);
			printf("\n - Bairro: %s", buscado_contato->bairro);
			printf("\n - N�mero: %s", buscado_contato->numero);
			printf("\n - Rua   : %s", buscado_contato->rua   );
        }
        buscado_contato = buscado_contato->prox;
    }
    printf("\n");
    if(mesmo == 1){
        printf("\n O nome digitado n�o existe!\n");
    }
    system("pause");
}

void Exibir_Todos(contato *lista) // FUN��O EXBIR TODOS CONTATOS
{
	contato *imprimindo_contato = lista;
    system("Cls");
    if(imprimindo_contato == NULL){
		printf("N�o existe nenhum contato. \n");
	}
	else
	{
	    // --IMPRIMINDO TODOS OS CONTATOS--
        printf("=========| LISTA DE CONTATOS |=========");
    	while(imprimindo_contato != NULL)
		{
			printf("\n Nome do Contato    : %s", imprimindo_contato->nome);
			printf("\n N�mero de telefone : %s", imprimindo_contato->numero);
			printf("\n ENDERE�O DO CONTATO:                    ");
			printf("\n - Estado: %s", imprimindo_contato->estado);
			printf("\n - Cidade: %s", imprimindo_contato->cidade);
			printf("\n - Bairro: %s", imprimindo_contato->bairro);
			printf("\n - N�mero: %s", imprimindo_contato->numero);
			printf("\n - Rua   : %s", imprimindo_contato->rua   );
			printf("\n---------------------------------------");
			imprimindo_contato = imprimindo_contato->prox;
		}
		printf("\n=======================================");
		printf("\n");
	}
	system("pause");
}

void Atualizar_Contato()
{
    system("Cls");
    printf("\n Atualizar Contato(NADA AINDA)\n");
    system("pause");
}

int main(){
    int op; // Op��o do Menu Inicial
    setlocale(LC_ALL,""); // Deixar em portugu�s
    /*printf("| SISTEMA DE MANIPULA��O DE CONTATOS | \n\n");
    system("pause");
    system("cls");*/
    contato *lista = NULL; // LISTA APONTANDO PARA ESPA�O VAZIO DE MEM�RIA
    do{
        system("cls");
        printf("| SISTEMA DE MANIPULA��O DE CONTATOS | \n\n");
        system("pause");
        printf("\n =====================");
        printf("\n MENU INICIAL:        ");
        printf("\n =====================");
        printf("\n 1 - Acessar o sistema");
        printf("\n 2 - Cr�ditos         ");
        printf("\n 3 -                  ");
        printf("\n 4 -                  ");
        printf("\n =====================");
        printf("\n ESCOLHA A OP��O:     ");
        scanf("%d", &op);
        /*Menu_Inicial(op);
        int Menu_Inicial(int op) // FUN��O DO MENU PRINCIPAL
        {*/
        switch(op){
        case 1: // Contiuar o programa
            break;
        case 2:
            Creditos();
            break;
        case 3:
            printf("Nada ainda...\n");
            system("pause");
            break;
        case 4:
            printf("Nada ainda...\n");
            system("pause");
            break;
        default:
            printf("Op��o inv�lida\n");
            system("pause");
            break;
        }
    }while(op != 1);
    system("cls");
//}
    int op2;
    while(1){ // While INFINITO
        system("cls");
        printf("\n ============================");
        printf("\n MENU DE CONTATOS:           ");
        printf("\n ============================");
        printf("\n 1 - Adicionar Contato       ");
        printf("\n 2 - Remover Contato         ");
        printf("\n 3 - Buscar Contato          ");
        printf("\n 4 - Exibir TODOS os contatos");
        printf("\n 5 - Atualizar Contato       ");
        printf("\n 6 - Sair do Programa        ");
        printf("\n ============================");
        printf("\n ESCOLHA A OP��O:            ");
        scanf("%d", &op2);
        switch(op2){
    case 1:
        Adicionar_Contato(&lista);
        break;
    case 2:
        Remover_Contato();
        break;
    case 3:
        Buscar_Contato(lista);
        break;
    case 4:
        Exibir_Todos(lista);
        break;
    case 5:
        Atualizar_Contato();
        break;
    case 6:
        printf("\n Saindo do programa...\n");
        system("pause");
        exit(0);
        break;
    default:
        printf("\n Op��o inv�lida...");
        system("pause");
    }
    //    Menu_Contatos(op2, &lista);
    }
   // int Menu_Contatos(int op2,contato **contatos)
//{
//	contato *lista = *contatos;

//}
    return 0;
}
