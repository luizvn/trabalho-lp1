#include <stdio.h>
#include <stdlib.h>
#include <string.h> // MANIPULAR STRING
#include <locale.h> // Biblioteca para deixar em português

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

// ======= FUNÇÕES =======
/*int Menu_Inicial(int op) // FUNÇÃO DO MENU PRINCIPAL
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
        printf("Opção inválida\n");
        system("pause");
        break;
    }
    system("cls");
}

void Creditos() // FUNÇÃO CRÉDITOS
{
    system("cls");
    printf("\n ====================CREDITOS===================");
    printf("\n TRABALHO UNIVERSITÁRIO 2º SEMESTRE             ");
    printf("\n UNIVERSIDADE DO ESTADO DA BAHIA(UNEB)          ");
    printf("\n Alunos: Gabriel Cerqueira Santos Rodrigues     ");
    printf("\n         Luiz Vinícius Pereira de Oliveira Souza");
    printf("\n Professor: Ernesto Massa                       ");
    printf("\n Discipina: Linguagem de Programação I(LPI)     ");
    printf("\n                                                ");
    printf("\n ===============================================");

    printf("\n\n");

    printf("\n ´´´´´´´´´´´´´´#´´´´´´´´´#´´´´´´´´´#´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´");
    printf("\n ´´´´´´´´´´´´´´´####´´´´´´####´´´´´#####´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´");
    printf("\n ´´´´´´´´´´´´´´´´´####´´´´´####´´´´´´####´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´");
    printf("\n ´´´´´´´´´´´´´´#######´´´####@#´´´#######´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´");
    printf("\n ´´´´´´´´´´´´´´´#####´´´´´####´´´´´#####´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´");
    printf("\n ´´´´´´´´´´´´#############################´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´");
    printf("\n ´´´´´´´´´´´´#############################´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´");
    printf("\n ´´´´´´´´´´´´#############################´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´###´´´´´");
    printf("\n ´´´´´´´´´´´´######´´#############´#######´´´´´´´´´´´´´´´´´´´´##´´´´´´´´´##´´´´´##´´´´´´´´##´´´´´#########´´´´´##´´´´###´");
    printf("\n ´´´´´´´´´´´´####´##´##´##########´´######´´´´´´´´´´´´´´´´´´´´##´´´´´´´´´##´´´´#####´´´´´´##´´´´´#########´´´´´##´´´´´##´");
    printf("\n ´´´´´´´´´´´´#############################´´´´´´´´´´´´´´´´´´´´##´´´´´´´´´##´´´´##´###´´´´´##´´´´´###´´´´´´´´´´´##´´´´´##´");
    printf("\n ´´´´´´´´´´´´#####´#´############´´#´#####´´´´´´´´´´´´´´´´´´´´##´´´´´´´´´##´´´´##´´´###´´´##´´´´´#######´´´´´´´#######´´´");
    printf("\n ´´´´´´´´´´´´##´##########################´´´´´´´´´´´´´´´´´´´´##´´´´´´´´´##´´´´##´´´´###´´##´´´´´#######´´´´´´´##´´´´´##´");
    printf("\n ´´´´´´´´´´´´##´´######################´##´´´´´´´´´´´´´´´´´´´´##´´´´´´´´´##´´´´##´´´´´´#####´´´´´###´´´´´´´´´´´##´´´´´###");
    printf("\n ´´´´´´´´´´´´##´´#########################´´´´´´´´´´´´´´´´´´´´###´´´´´´´###´´´´##´´´´´´´####´´´´´##########´´´´##´´´´´###");
    printf("\n ´´´´´´´´´´´´##´´´´´´´´´´´´##´´´´´´´´´´###´´´´´´´´´´´´´´´´´´´´´###´´´´´###´´´´´##´´´´´´´´###´´´´´##########´´´´#########´");
    printf("\n ´´´´´´´´´´´´##´´´´´´´´´´´´##´´´´´´´´´´###´´´´´´´´´´´´´´´´´´´´´###´´´´´###´´´´´##´´´´´´´´###´´´´´##########´´´´#########´");
    printf("\n ´#´´´´#####´##´##########´############´##´#####´´´´#´´´´´´´´´´´´´####´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´");
    printf("\n ´########################################´########@@´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´");
    printf("\n ###########´######´´#####´#######´#######´####@##@@@#´´´´´´´#############################´´´############################");
    printf("\n ´#####´´###´######´´##´##########´´##########´#####´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´");
    printf("\n ´´´´´´#####´#############################´####´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´");
    printf("\n ´´´´´#####´´#######´#############´#######´´#@@##´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´");
    printf("\n ´´´´´##´###´##############´#############´´###@@##´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´");
    printf("\n ´´´´´#########´#################################´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´");
    printf("\n ´´´´´´#############´´´´#######´´´´´############´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´");
    printf("\n ´´´´´´´´#####################################´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´");
    printf("\n ´´´´´´´´´´#################################´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´");
    printf("\n ´´´´´´´´´´´´´´##########################´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´");
    printf("\n ´´´´´´´´´´´´´´´´###´#############´´##´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´");
    printf("\n ´´´´´´´´´´´´´´´´´##´´´´´´´##´´´´´´´´#´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´");
    printf("\n ´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´");

    printf("\n\n");

    system("pause");
}

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
        printf("\n Opção inválida...");
        system("pause");
    }
}
*/
void Adicionar_Contato(contato **lista)
{
    system("Cls");
    getchar(); //  para pegar o espaço e não sujar outras variáveis

    contato *novo_contato = (contato *)malloc(sizeof(contato)); // CRIA UMA NOVA STRUCT PARA ADD UM USUARIO
    if(novo_contato)
    	printf("alocou memoria\n");
    else
    	printf("nao alocou memoria\n");

    printf("\n Digite seu nome: ");
    fgets(novo_contato->nome, MAX_CHAR, stdin);
    novo_contato->nome[strcspn(novo_contato->nome, "\n")] = '\0';

    printf("\n Digite sua data de nascimento: (dia/mês/ano)\t");
    scanf("%d/%d/%d", &novo_contato->dia_nascimento, &novo_contato->mes_nascimento, &novo_contato->ano_nascimento);
    getchar();

    /*printf("%d/%d/%d", novo_contato->dia_nascimento, novo_contato->mes_nascimento, novo_contato->ano_nascimento);
    getch();*/
    // --PEDINDO ENDEREÇO--
    printf("\n DIGITE O ENDEREÇO DO CONTATO: ");

    printf("\n Rua:    ");
    fgets(novo_contato->rua,MAX_CHAR,stdin);
    novo_contato->rua[strcspn(novo_contato->rua, "\n")] = '\0';

    printf("\n Número: ");
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
		printf("gabrielll");
		system("pause");
	}
    else{
		novo_contato->prox = *lista;
		*lista = novo_contato;	
		printf("xdxdxd");
		system("pause");
	}
}

void Remover_Contato()
{
    system("Cls");
    printf("\n Remover Contato(NADA AINDA)\n");
    system("pause");
}

void Buscar_Contato()
{
    system("Cls");
    printf("\n Exibir UM Contato(NADA AINDA)\n");
    system("pause");
}

void Exibir_Todos(contato *lista)
{
	contato *imprimindo_contato = lista;
    system("Cls");
    if(imprimindo_contato == NULL){
		printf("Não existe nenhum contato. \n");
	}
	else
	{
		printf("Lista de Contatos:     \n");
    	while(imprimindo_contato != NULL)
		{
			printf("Nome do Contato: %s\n", imprimindo_contato->nome);
			printf("Número de telefone do contato: %s\n", imprimindo_contato->numero);
			printf("Endereço\n");
			imprimindo_contato = imprimindo_contato->prox;
		}
		
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
    int op; // Opção do Menu Inicial
    setlocale(LC_ALL,""); // Deixar em português
    /*printf("| SISTEMA DE MANIPULAÇÃO DE CONTATOS | \n\n");
    system("pause");
    system("cls");*/
    contato *lista = NULL;
    do{
        printf("| SISTEMA DE MANIPULAÇÃO DE CONTATOS | \n\n");
        system("pause");
        printf("\n =====================");
        printf("\n MENU INICIAL:        ");
        printf("\n =====================");
        printf("\n 1 - Acessar o sistema");
        printf("\n 2 - Créditos         ");
        printf("\n 3 -                  ");
        printf("\n 4 -                  ");
        printf("\n =====================");
        printf("\n ESCOLHA A OPÇÃO:     ");
        scanf("%d", &op);
      //  Menu_Inicial(op);
    }while(op != 1);
//	int Menu_Inicial(int op) // FUNÇÃO DO MENU PRINCIPAL
//{
    switch(op){
    case 1: // Contiuar o programa
        break;
    case 2:
       // Creditos();
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
        printf("Opção inválida\n");
        system("pause");
        break;
    }
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
        printf("\n 3 - Exibir UM Contato       ");
        printf("\n 4 - Exibir TODOS os contatos");
        printf("\n 5 - Atualizar Contato       ");
        printf("\n 6 - Sair do Programa        ");
        printf("\n ============================");
        printf("\n ESCOLHA A OPÇÃO:            ");
        scanf("%d", &op2);
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
        printf("\n Opção inválida...");
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
