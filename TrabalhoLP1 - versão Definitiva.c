#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Biblioteca para manipular strings
#include <locale.h> // Biblioteca para deixar em português
#include <ctype.h>  // Biblioteca para saber o tipo de uma variável

// ======= DEFINES ========
#define MAX_CHAR 40
#define MAX_TEL 20
#define MAX_NUM 5

// ======= STRUCTS ========
typedef struct Contato{
    char nome[MAX_CHAR];
    int dia_nascimento, mes_nascimento, ano_nascimento;
    char rua[MAX_CHAR], numero[MAX_NUM], bairro[MAX_CHAR], cidade[MAX_CHAR], estado[MAX_CHAR];
    char numero_telefone[MAX_TEL];
    struct Contato *prox;
} contato;

// ======= FUNÇÕES =======

void Creditos() // FUNÇÃO CRÉDITOS
{
    system("cls||clear");
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

void Adicionar_Contato(contato **lista) // FUNÇÃO PARA ADICIONAR CONTATO NA LISTA
{
    system("cls||clear");
    getchar(); //  para pegar o espaço e não sujar outras variáveis
    int aux = 0; // Variável auxiliar
	char verificar_contato[MAX_TEL];
    contato *novo_contato = (contato *)malloc(sizeof(contato)); // CRIA UMA NOVA STRUCT PARA ADD UM USUARIO
    contato *listaA = *lista;
    contato *topo = *lista; // apontando para o topo da lista

	system("cls||clear");
	printf("\nInforme o número de telefone do contato: (ex: (12) 91111-1111)\t\n");
	fgets(verificar_contato,MAX_TEL,stdin);
	verificar_contato[strcspn(verificar_contato,"\n")] = '\0';
	while(listaA != NULL) // verificando o número em cada contato da lista
	{
		if(aux == 1)
		{
			printf("\nInforme o número de telefone do contato: (ex: (12) 91111-1111)\t\n");
	   	   	fgets(verificar_contato,MAX_TEL,stdin);
	   	   	verificar_contato[strcspn(verificar_contato,"\n")] = '\0';
			aux = 0;
			listaA = topo;
		}
		if(strcmp(verificar_contato,listaA->numero_telefone) == 0)
		{
			printf("\nJá existe um contato com esse número de telefone!\n");
			aux = 1;
			system("pause");
			system("cls");
			listaA = topo;
	   	}
	   	listaA = listaA->prox;

	}
	strcpy(novo_contato->numero_telefone, verificar_contato); // Passando o nome para o ponteiro 'novo_contato'

    // --PEDINDO NOME / DATA DE NASCIMENTO--
    printf("\n Digite seu nome: ");
    fgets(novo_contato->nome, MAX_CHAR, stdin);
    novo_contato->nome[strcspn(novo_contato->nome, "\n")] = '\0';

    printf("\n Digite sua data de nascimento: (dia/mês/ano)\t");
    scanf("%d/%d/%d", &novo_contato->dia_nascimento, &novo_contato->mes_nascimento, &novo_contato->ano_nascimento);
    getchar();

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

    // --BOTANDO NA LISTA--
    if(*lista==NULL)
    {
    	*lista = novo_contato;
	}
    else{
		novo_contato->prox = *lista;
		*lista = novo_contato;
	}
	printf("\n\n Contato ADICIONADO com sucesso!\n");
	system("pause");
}

void Remover_Contato(contato **lista) // FUNÇÃO DELETAR CONTATO NA LISTA
{
	char num_tel[MAX_TEL];
	int aux = 0; // Variável auxiliar
	contato *anterior = *lista;
	contato *atual; // apontando para o atual da lista

    system("Cls||clear");
    getchar();
    printf("Digite o número de telefone do contato deseja APAGAR: (ex: (71) 91111-1111) \t");
	fgets(num_tel,MAX_TEL,stdin);
	num_tel[strcspn(num_tel,"\n")] = '\0';

	while(anterior != NULL){
		atual = anterior->prox;
		if(atual == NULL)
		{
			if(strcmp(anterior->numero_telefone, num_tel) == 0)
			{
				aux = 1;
				free(anterior); // LIMPANDO O ESPAÇO DE MEMÓRIA DA LISTA
				*lista = NULL;
			}
			break;
		}

		if(strcmp(atual->numero_telefone, num_tel)==0)
		{
			anterior->prox = atual->prox;
			free(atual); // LIMPANDO O ESPAÇO DE MEMÓRIA DA LISTA
			aux = 1;
			break;
		}
		else if(strcmp(anterior->numero_telefone, num_tel) == 0)
			{
				aux = 1;
				*lista = anterior->prox;
				free(anterior); // LIMPANDO O ESPAÇO DE MEMÓRIA DA LISTA
				break;
			}
		anterior = anterior->prox;
	}
	if(aux == 0)
	{
		printf("\nContato não encontrado.\n");
	}
	else
	   	printf("\nContato removido!\n");
	printf("\nVoltando para o MENU...\n");
    system("pause");
}

void Buscar_Contato(contato *lista) // FUNÇÃO BUSCAR CONTATO NA LISTA
{
    int mesmo = 1; // Variável auxiliar
    char nome[MAX_CHAR];
    contato *buscado_contato = lista;

    system("Cls||clear");
    getchar();

    printf("Digite o NOME do contato que deseja:\t"); // PEDINDO O NOME PARA COMPARAR
    fgets(nome, MAX_CHAR, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    // --IMPRIMINDO O CONTATO BUSCADO BUSCADO--
    while(buscado_contato != NULL){
        if(strcasecmp(nome, buscado_contato->nome) == 0){
            mesmo = 0;
            printf("\n =========| BUSCA POR: %s |=========", nome);
            printf("\n Nome do Contato    : %s", buscado_contato->nome);
			printf("\n Número de telefone : %s", buscado_contato->numero_telefone);
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

void Exibir_Todos(contato *lista) // FUNÇÃO EXBIR TODOS CONTATOS DA LISTA
{
	contato *imprimindo_contato = lista;
    system("Cls||clear");
    if(imprimindo_contato == NULL){ // Conferindo se a lista existe
		printf("Não existe nenhum contato. \n");
	}
	else
	{
	    // --IMPRIMINDO TODOS OS CONTATOS--
        printf("=========| LISTA DE CONTATOS |=========");
    	while(imprimindo_contato != NULL)
		{
			printf("\n Nome do Contato    : %s", imprimindo_contato->nome);
			printf("\n Número de telefone : %s", imprimindo_contato->numero_telefone);
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

void Atualizar_Contato(contato **lista) // FUNÇÃO PARA ATUALIZAR ALGUM CONTATO DA LISTA
{
    int opc; // Variável de opção
    int saida = 0, mesmo = 1, aux = 0; // Variáveis auxiliares
    char num_tel[MAX_TEL], identificar_telefone[MAX_TEL]; // Strings(com números de telefone) para conferir se ja existe o número
    contato *atualizado_contato = *lista;
    contato *topo = *lista;
    contato *listaM = *lista;

    system("Cls||clear");
    getchar();

    printf("Digite o NÚMERO DE TELEFONE do contato que deseja alterar: (ex: (12) 91111-1111)\t");
    fgets(num_tel, MAX_TEL, stdin);
    num_tel[strcspn(num_tel, "\n")] = '\0';

    while(atualizado_contato != NULL){
        if(strcasecmp(num_tel, atualizado_contato->numero_telefone) == 0){
            mesmo = 0;
            printf("\n =========| BUSCA POR: %s |=========", num_tel);
            printf("\n|==== CONTATO ENCONTRADO ====|\n");
            system("pause");
            while(1){
                system("cls||clear");
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
                system("cls||clear");

                switch(opc){
                case 1: // --PEDINDO NOME / DATA DE NASCIMENTO--
                    printf("\n Digite o NOVO nome: ");
                    fgets(atualizado_contato->nome, MAX_CHAR, stdin);
                    atualizado_contato->nome[strcspn(atualizado_contato->nome, "\n")] = '\0';
                    printf("\n");
                    system("pause");
                    break;
                case 2: // -- PEDINDO NÚMERO DE TELEFONE--
                    printf("\nInforme o NOVO número de telefone do contato: (ex: (12) 91111-1111)\t\n");
					fgets(identificar_telefone,MAX_TEL,stdin);
					identificar_telefone[strcspn(identificar_telefone,"\n")] = '\0';
					while(listaM != NULL)
					{
						if(aux ==1)
						{
							printf("\nInforme o NOVO número de telefone do contato: (ex: (12) 91111-1111)\t\n");
					   	   	fgets(identificar_telefone,MAX_TEL,stdin);
					   	   	identificar_telefone[strcspn(identificar_telefone,"\n")] = '\0';
							aux = 0;
							listaM = topo;
						}
						if(strcmp(identificar_telefone,listaM->numero_telefone) == 0)
						{
							printf("\nJá existe um contato com esse número de telefone!\n");
							aux = 1;
							system("pause");
							system("cls");
							listaM = topo;
					   	}
					   	listaM = listaM->prox;

					}
					strcpy(atualizado_contato->numero_telefone, identificar_telefone);
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
                case 5: // SAINDO DO WHILE
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
    	printf("\n =========| BUSCA POR: %s |=========", num_tel);
        printf("\n Não existe contato com esse número de telefone.\n");
    }
    system("pause");
}

void Ler_Memoria(contato **lista) // FUNÇÃO PARA LER O QUE ESTÁ NO ARQUIVO
{

    system("cls||clear");
    FILE *Arquivo = fopen("Contatos_salvar.txt", "r"); // Abrindo arquivo para ler
    contato *Lido_contato;
    int erro = 0; // Variável auxiliar
    char letra,nome[MAX_CHAR];
    fscanf(Arquivo, "%[^\n]\n", nome);

    if(Arquivo == NULL){ // Verificando se o arquivo é NULL
        printf("Não foi possível ler o arquivo, pois ele não existe ou está vazio!\n");
        erro = 1;
    }
    // --LENDO ARQUIVO--
    else
	{
		Lido_contato = (contato *)malloc(sizeof(contato));
		strcpy(Lido_contato->nome, nome);
		Lido_contato->numero_telefone[0] = letra;
		fscanf(Arquivo, "%[^\n]\n", Lido_contato->numero_telefone);
		fscanf(Arquivo, "%d\n", &Lido_contato->dia_nascimento);
	    fscanf(Arquivo, "%d\n", &Lido_contato->mes_nascimento);
        fscanf(Arquivo, "%d\n", &Lido_contato->ano_nascimento);
        fscanf(Arquivo, "%[^\n]\n", Lido_contato->estado);
        fscanf(Arquivo, "%[^\n]\n", Lido_contato->cidade);
        fscanf(Arquivo, "%[^\n]\n", Lido_contato->bairro);
        fscanf(Arquivo, "%[^\n]\n", Lido_contato->numero);
        fscanf(Arquivo, "%[^\n]\n", Lido_contato->rua);
        Lido_contato->prox = *lista;
		*lista = Lido_contato;
		while(!feof(Arquivo))
		{
	        Lido_contato = (contato *)malloc(sizeof(contato));
	        if(Lido_contato == NULL){
	            break;
	        }
	        fscanf(Arquivo, "%[^\n]\n", Lido_contato->nome);
	        fscanf(Arquivo, "%[^\n]\n", Lido_contato->numero_telefone);
	        fscanf(Arquivo, "%d\n", &Lido_contato->dia_nascimento);
	        fscanf(Arquivo, "%d\n", &Lido_contato->mes_nascimento);
	        fscanf(Arquivo, "%d\n", &Lido_contato->ano_nascimento);
	        fscanf(Arquivo, "%[^\n]\n", Lido_contato->estado);
	        fscanf(Arquivo, "%[^\n]\n", Lido_contato->cidade);
	        fscanf(Arquivo, "%[^\n]\n", Lido_contato->bairro);
	        fscanf(Arquivo, "%[^\n]\n", Lido_contato->numero);
	        fscanf(Arquivo, "%[^\n]\n", Lido_contato->rua);

	        Lido_contato->prox = *lista;
	        *lista = Lido_contato;
		}
	}

    fclose(Arquivo); // Fechando o arquivo
    if(erro == 0){
        printf("O arquivo foi lido\n");
    }
    system("pause");
}
void Gravar_Memoria(contato *lista) // FUNÇÃO PARA GRAVAR NO ARQUIVO
{
    FILE *Arquivo = fopen("Contatos_salvar.txt", "a"); // Abrindo arquivo para acrescentar
    contato *Gravar = lista;
    int erro = 0; // Variável auxiliar

    if(Arquivo == NULL){
        printf("Erro ao abrir o arquivo!\n");
        erro = 1;
    }
    // --GRAVANDO ARQUIVO--
    while(Gravar != NULL){
        fprintf(Arquivo, "%s\n", Gravar->nome);
        fprintf(Arquivo, "%s\n", Gravar->numero_telefone);
        fprintf(Arquivo, "%d\n", Gravar->dia_nascimento);
        fprintf(Arquivo, "%d\n", Gravar->mes_nascimento);
        fprintf(Arquivo, "%d\n", Gravar->ano_nascimento);
        fprintf(Arquivo, "%s\n", Gravar->estado);
        fprintf(Arquivo, "%s\n", Gravar->cidade);
        fprintf(Arquivo, "%s\n", Gravar->bairro);
        fprintf(Arquivo, "%s\n", Gravar->numero);
        fprintf(Arquivo, "%s\n", Gravar->rua);

        Gravar = Gravar->prox;
    }

    fclose(Arquivo); // Fechando o arquivo
    if(erro == 0){
        printf("\n O contato foi salvo no arquivo\n");
    }
    system("pause");
}

void Apagar_Memoria() // FUNÇÃO PARA APAGAR O QUE TEM NO ARQUIVO
{
    system("cls||clear");
    FILE *Arquivo = fopen("Contatos_salvar.txt", "w"); // Abrindo arquivo para escrever
    int erro = 0;
    char letra;

    if(Arquivo == NULL){
        printf("Erro ao abrir o arquivo/n");
        erro = 1;
    } else{
        fclose(Arquivo); // Fechando o arquivo
    }

    if(erro == 0){
        printf("Arquivo foi limpado com sucesso\n");
    }
    system("pause");
}

void liberarLista(contato *lista)  // Liberando a lista
{
    contato *atual = lista;
    while (atual != NULL) {
        contato *proximo = atual->prox;
        free(atual);
        atual = proximo;
    }
}


int main(){
    int op; // Opção do Menu Inicial
    setlocale(LC_ALL,""); // Deixar em português

    contato *lista = NULL; // LISTA APONTANDO PARA ESPAÇO VAZIO DE MEMÓRIA
    do{
        system("cls||clear");
        printf("| SISTEMA DE MANIPULAÇÃO DE CONTATOS | \n\n");
        system("pause");
        printf("\n =====================");
        printf("\n MENU INICIAL:        ");
        printf("\n =====================");
        printf("\n 1 - Acessar o sistema");
        printf("\n 2 - Créditos         ");
        printf("\n =====================");
        printf("\n ESCOLHA A OPÇÃO:     ");
        scanf("%d", &op);

        switch(op){
        case 1: // Contiuar o programa
            break;
        case 2:
            Creditos(); // Indo para função créditos
            break;
        default:
            printf("Opção inválida\n");
            system("pause");
            break;
        }
    }while(op != 1);
    system("cls||clear");

    int op2; // opção do MENU DE CONTATOS
    while(1){ // While INFINITO
        system("cls||clear");
        printf("\n ============================");
        printf("\n MENU DE CONTATOS:           ");
        printf("\n ============================");
        printf("\n 1 - Adicionar Contato       ");
        printf("\n 2 - Remover Contato         ");
        printf("\n 3 - Buscar Contato          ");
        printf("\n 4 - Exibir TODOS os contatos");
        printf("\n 5 - Atualizar Contato       ");
        printf("\n 6 - Gravar Arquivo          ");
        printf("\n 7 - Ler Arquivo             ");
        printf("\n 8 - Limpar Arquivo          ");
        printf("\n 9 - Sair do Programa        ");
        printf("\n ============================");
        printf("\n ESCOLHA A OPÇÃO:            ");
        scanf("%d", &op2);
        switch(op2){
        case 1:
            Adicionar_Contato(&lista);
            break;
        case 2:
            Remover_Contato(&lista);
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
            Gravar_Memoria(lista);
            break;
        case 7:
            Ler_Memoria(&lista);
            break;
        case 8:
            Apagar_Memoria();
            break;
        case 9:
            printf("\n Saindo do programa...\n");
            system("pause");
            liberarLista(lista);
            exit(0);
            break;
        default:
            printf("\n Opção inválida...\n");
            system("pause");
            break;
        }
    }
    return 0;
}
