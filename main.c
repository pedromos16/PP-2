#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void cadastroCliente();
void cadastroFornecedor();
void cadastroFesta();
void cadastroFuncionario();
void impRegistro(char selectRegistro[10]);
//criando estruturas - INICIO
struct Tcliente
{
    int codigo,telefone,dataNasci;
    char nome[50],endereco[50];
};
struct Tfuncionario
{
    int codigo,telefone;
    char nome[50],funcao[50],tipo[10];
    float salario;
};
struct Tfornecedor
{
    int codigo,telefone;
    char nome[50],produtoFornecido[50];
};

struct Tfesta
{
    // Data = Int? dataDia, dataMes, dataAno
    //Data = string? 12/12/12
    int codigoFesta,codigoCliente,qntConvidados,data,horarioInicio,horarioFim;
    char tema[50],diaSemana[20];
};
struct Tcontrato
{
    int numContrato,codigoFesta;
    char formaPagamento[50],status[50];
    float valorTotal,desconto,valorFinal;
};
//criando estruturas - FIM

//criando os tipos das estruturas
typedef struct Tcliente cliente;
typedef struct Tfuncionario funcionario;
typedef struct Tfornecedor fornecedor;
typedef struct Tfesta festa;
typedef struct Tcontrato contrato;

//variáveis globais
cliente cli;
funcionario func;
fornecedor forn;
festa fest;

int main()
{
    setlocale(LC_ALL, "portuguese");
    int op;
    do{
        printf("Escolha o tipo de cadastro que deseja realizar:\n");
        printf("1 - Cadastrar cliente\n");
        printf("2 - Cadastrar funcionário\n");
        printf("3 - Cadastrar fornecedor\n");
        printf("4 - Cadastrar festa\n");
        printf("5 - Sair\n");
        scanf("%d", &op);

        switch(op){
        case 1:
            system("cls");
            cadastroCliente();
            break;
        case 2:
            system("cls");
            cadastroFuncionario();
            break;
        case 3:
            system("cls");
            cadastroFornecedor();
            break;
        case 4:
            system("cls");
            cadastroFesta();
        }


    }while(op!=5);

    return 0;
}
void cadastroCliente()
{
    printf("Digite o código do cliente:\n");
    fflush(stdin);
    scanf("%d",&cli.codigo);
    printf("Digite o nome do cliente:\n");
    fflush(stdin);
    scanf("%s",&cli.nome);
    printf("Digite o endereço do cliente:\n");
    fflush(stdin);
    scanf("%s",&cli.endereco);
    printf("Digite o telefone do cliente:\n");
    fflush(stdin);
    scanf("%d",&cli.telefone);
    printf("Digite o data de nascimento do cliente:\n");
    fflush(stdin);
    scanf("%d",&cli.dataNasci);
    impRegistro("cliente");
}
void cadastroFuncionario()
{
    printf("Digite o código do funcionário:\n");
    fflush(stdin);
    scanf("%d",&func.codigo);
    printf("Digite o nome do funcionário:\n");
    fflush(stdin);
    gets(func.nome);
    printf("Digite a função do funcionário:\n");
    fflush(stdin);
    gets(func.funcao);
    printf("Digite o tipo do funcionário:\n");
    fflush(stdin);
    gets(func.tipo);
    printf("Digite o salário do funcionário:\n");
    fflush(stdin);
    scanf("%f",&func.salario);

}
void cadastroFornecedor()
{

}
void cadastroFesta()
{

}
void impRegistro(char selectRegistro[10])
{
    if(selectRegistro=="cliente"){
        printf("Código do cliente: %d\n",cli.codigo);
        printf("Nome do cliente: %s\n",cli.nome);
        printf("Endereço do cliente: %s\n",cli.endereco);
        printf("Telefone do cliente: %d\n",cli.telefone);
        printf("Data de nascimento do cliente: %d\n",cli.dataNasci);
    }
    if(selectRegistro=="funcionario"){
        printf("Código do funcionário: %d\n",func.codigo);
        printf("Nome do funcionário: %s\n",func.nome);
        printf("Função do funcionário: %s\n",func.funcao);
        printf("Tipo do funcionário: %s\n",func.tipo);
        printf("Salário do funcionário: %f\n",func.salario);
    }
    if(selectRegistro=="fornecedor"){
        
    }
    if(selectRegistro=="festa"){

    }
}


