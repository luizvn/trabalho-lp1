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
*/
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
        printf("\n Opção inválida...");
        system("pause");
    }
}
*/
void Adicionar_Contato(contato **lista) // FUNÇÃO ADD CONTATO
{
    system("Cls");
    getchar(); //  para pegar o espaço e não sujar outras variáveis

    contato *novo_contato = (contato *)malloc(sizeof(contato)); // CRIA UMA NOVA STRUCT PARA ADD UM USUARIO
    /*if(novo_contato)
    	printf("alocou memoria\n");
    else
    	printf("nao alocou memoria\n");*/

    // --PEDINDO NOME / DATA DE NASCIMENTO--
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

void Remover_Contato() // FUNÇÃO DEL CONTATO
{
    system("Cls");
    printf("\n Remover Contato(NADA AINDA)\n");
    system("pause");
}

void Buscar_Contato(contato *lista) // FUNÇÃO BUSCAR CONTATO
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
            mesmo = 0;
            printf("\n =========| BUSCA POR: %s |=========", nome);
            printf("\n Nome do Contato    : %s", buscado_contato->nome);
			printf("\n Número de telefone : %s", buscado_contato->numero);
			printf("\n Data de nascimento : %d/%d/%d", buscado_contato->dia_nascimento, buscado_contato->mes_nascimento, buscado_contato->ano_nascimento);
			printf("\n ENDEREÇO DE CONTATO:                 ");
			printf("\n - Estado: %s", buscado_contato->estado);
			printf("\n - Cidade: %s", buscado_contato->cidade);
			printf("\n - Bairro: %s", buscado_contato->bairro);
			printf("\n - Número: %s", buscado_contato->numero);
			printf("\n - Rua   : %s", buscado_contato->rua   );
        }
        buscado_contato = buscado_contato->prox;
    }
    printf("\n");
    if(mesmo == 1){
    	printf("\n =========| BUSCA POR: %s |=========", nome);
        printf("\n Não existe contato com esse nome.\n");
    }
    system("pause");
}

void Exibir_Todos(contato *lista) // FUNÇÃO EXBIR TODOS CONTATOS
{
	contato *imprimindo_contato = lista;
    system("Cls");
    if(imprimindo_contato == NULL){
		printf("Não existe nenhum contato. \n");
	}
	else
	{
	    // --IMPRIMINDO TODOS OS CONTATOS--
        printf("=========| LISTA DE CONTATOS |=========");
    	while(imprimindo_contato != NULL)
		{
			printf("\n Nome do Contato    : %s", imprimindo_contato->nome);
			printf("\n Número de telefone : %s", imprimindo_contato->numero);
			printf("\n Data de nascimento : %d/%d/%d", imprimindo_contato->dia_nascimento, imprimindo_contato->mes_nascimento, imprimindo_contato->ano_nascimento);
			printf("\n ENDEREÇO DO CONTATO:                    ");
			printf("\n - Estado: %s", imprimindo_contato->estado);
			printf("\n - Cidade: %s", imprimindo_contato->cidade);
			printf("\n - Bairro: %s", imprimindo_contato->bairro);
			printf("\n - Número: %s", imprimindo_contato->numero);
			printf("\n - Rua   : %s", imprimindo_contato->rua   );
			printf("\n---------------------------------------");
			imprimindo_contato = imprimindo_contato->prox;
		}
		printf("\n=======================================");
		printf("\n");
	}
	system("pause");
}

void Atualizar_Contato(contato **lista)
{
    int opc, saida = 0, mesmo = 1;
    char nome[MAX_CHAR];
    contato *atualizado_contato = *lista;

    system("Cls");
    getchar();

    printf("Digite o NOME do contato que deseja alterar:\t");
    fgets(nome, MAX_CHAR, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    while(atualizado_contato != NULL){
        if(strcasecmp(nome, atualizado_contato->nome) == 0){
            mesmo = 0;
            printf("\n =========| BUSCA POR: %s |=========", nome);
            printf("\n|==== CONTATO ENCONTRADO ====|\n");
            system("pause");
            while(1){
                system("cls");
                printf("\n =============================================");
                printf("\n QUAL INFORMAÇÃO DO CONTATO %s DESEJA ALTERAR?", atualizado_contato->nome);
                printf("\n =============================================");
                printf("\n  1 - Nome                                    ");
                printf("\n  2 - Número de telefone                      ");
                printf("\n  3 - Data de nascimento                      ");
                printf("\n  4 - Endereço                                ");
                printf("\n  5 - Encerrar                                ");
                printf("\n =============================================");
                printf("\n Escolha a opção:                             ");
                scanf("%d", &opc);
                getchar();
                system("cls");

                switch(opc){
                case 1: // --PEDINDO NOME / DATA DE NASCIMENTO--
                    printf("\n Digite o NOVO nome: ");
                    fgets(atualizado_contato->nome, MAX_CHAR, stdin);
                    atualizado_contato->nome[strcspn(atualizado_contato->nome, "\n")] = '\0';
                    printf("\n");
                    system("pause");
                    break;
                case 2: // -- PEDINDO NÚMERO DE TELEFONE-- FAZERRRRR
                    printf("\n Nada ainda...");
                    printf("\n");
                    system("pause");
                    break;
                case 3: // --PEDINDO DATA DE NASCIMENTO--
                    printf("\n Digite a NOVA data de nascimento: (dia/mês/ano)\t");
                    scanf("%d/%d/%d", &atualizado_contato->dia_nascimento, &atualizado_contato->mes_nascimento, &atualizado_contato->ano_nascimento);
                    getchar();
                    printf("\n");
                    system("pause");
                    break;
                case 4: // --PEDINDO ENDEREÇO--
                    printf("\n Digite seu NOVO endereço: ");
                    printf("\n Rua:    ");
                    fgets(atualizado_contato->rua,MAX_CHAR,stdin);
                    atualizado_contato->rua[strcspn(atualizado_contato->rua, "\n")] = '\0';

                    printf("\n Número: ");
                    fgets(atualizado_contato->numero,MAX_CHAR,stdin);
                    atualizado_contato->numero[strcspn(atualizado_contato->numero, "\n")] = '\0';

                    printf("\n Bairro: ");
                    fgets(atualizado_contato->bairro,MAX_CHAR,stdin);
                    atualizado_contato->bairro[strcspn(atualizado_contato->bairro, "\n")] = '\0';

                    printf("\n Cidade: ");
                    fgets(atualizado_contato->cidade,MAX_CHAR,stdin);
                    atualizado_contato->cidade[strcspn(atualizado_contato->cidade, "\n")] = '\0';

                    printf("\n Estado: ");
                    fgets(atualizado_contato->estado,MAX_CHAR,stdin);
                    atualizado_contato->estado[strcspn(atualizado_contato->estado, "\n")] = '\0';

                    printf("\n");
                    system("pause");
                    break;
                case 5:
                    saida = 1;
                    break;
                default:
                    printf("\nOpção inválida...\n");
                    system("pause");
                    break;
                }
                if(saida == 1){
                    printf("\nVoltando para o MENU...\n");
                    break;
                }
            }
        }
        if(saida == 1){
            break;
        }
        atualizado_contato = atualizado_contato->prox;
    }
    printf("\n");
    if(mesmo == 1){
    	printf("\n =========| BUSCA POR: %s |=========", nome);
        printf("\n Não existe contato com esse nome.\n");
    }
    system("pause");
}

int main(){
    int op; // Opção do Menu Inicial
    setlocale(LC_ALL,""); // Deixar em português
    /*printf("| SISTEMA DE MANIPULAÇÃO DE CONTATOS | \n\n");
    system("pause");
    system("cls");*/
    contato *lista = NULL; // LISTA APONTANDO PARA ESPAÇO VAZIO DE MEMÓRIA
    do{
        system("cls");
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
        /*Menu_Inicial(op);
        int Menu_Inicial(int op) // FUNÇÃO DO MENU PRINCIPAL
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
            printf("Opção inválida\n");
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
        printf("\n 6 - Carregar Arquivo        ");
        printf("\n 7 - Limpar Arquivo          ");
        printf("\n 8 - Sair do Programa        ");
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
        Buscar_Contato(lista);
        break;
    case 4:
        Exibir_Todos(lista);
        break;
    case 5:
        Atualizar_Contato(&lista);
        break;
    case 6:
        printf("\n Nada ainda...");
        system("pause");
        break;
    case 7:
        printf("\n Nada ainda...");
        system("pause");
        break;
    case 8:
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
