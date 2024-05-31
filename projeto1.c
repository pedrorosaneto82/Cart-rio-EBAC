#include <stdio.h> //Biblioteca de Comunidade com o Usuário

#include <stdlib.h> //biblioteca de alocação de espaço em memória

#include <locale.h> //biblioteca de alocações de texto por registro

#include <string.h>//biblioteca responsável por cuidar das string

int registro()

   {    

   

 arquivo char [40]; inicio da criação de variáveis/string

 CPF CHAR [40];

  char nome [40];

  char sobrenome [40];

 char cargo [40];//final de criação de variáveis/string

  

   

 printf("digite o CPF a ser cadastrado :"); coletando informações do usuário

 scanf("%s", cpf);//%s refere-se a uma cadeia de caracteres

   

 strcpy(arquivo, CPF);// responsável por copiar os valores das string

   

  FILE *file;// cria o arquivo

  file = fopen(arquivo, "w");// cria o arquivo

 fprintf(file,CPF);//salva o valor da variável

  fclose(file);//fecha o arquivo

   

 arquivo = fopen(arquivo, "a");

 fprintf(arquivo, ",");

 fclose(arquivo);

   

  printf("digite o nome a ser cadastrado: ");

	scanf("%s",nome);

 fclose(arquivo);

	

  printf("digite o sobrenome a ser cadastrado: ");

  scanf("%s",sobrenome);

	

 arquivo = fopen(arquivo, "a");

 fprintf(arquivo,sobrenome);

 fclose(arquivo);

	

 arquivo = fopen(arquivo, "a");

 fprintf(arquivo, ",");

 fclose(arquivo);

   

  printf("digite o cargo a ser cadastrado: ");

 scanf("%s", carga);

   

 arquivo = fopen(arquivo, "a");

 fprintf (arquivo, carga);

 fclose(arquivo);

   

 sistema ("pausa");

   

  }

int consulta()

  

 {

 setlocale(LC_ALL, "português");// Definindo a linguagem

 	

 CPF Char[40];

 	char conteudo[200];

 	

 	printf("Digite o cpf a ser consultado: ");

 	scanf("%s",cpf);

 	

 ARQUIVO *arquivo;

 arquivo = fopen(cpf,"r");

 	

 	if(file == NULL);

 	

 	{

 printf("Não foi possível abrir o arquivo, não localizado!. \n");

	}

   

 while(fgets(conteudo, 200, arquivo) != NULL)

   

  {

 printf("\nEssas são as informações do usuário: ");

 printf("%s", conteúdo);

  	printf("\n\n");

	}

 	 

 sistema ("pausa");

 	 

   

 }

 

 int deletar()

{

 CPF Char[40];

 	

 	printf("Digite o CPF do usuário a ser deletado: ");

  scanf("%s",cpf);

   

 remover (CPF);

   

 ARQUIVO *arquivo;

 arquivo = fopen(cpf,"r");

   

  if(file == NULL)

  {

 

 printf("O usuário não se encontra no sistema!. \n");

 sistema ("pausa");

   

  }

}

int main()

{

 int opção=0; definindo variáveis

	int laco=1;

  char senhadigitada[40]="a";

 int comparação;

	

  printf("### Cartório da EBAC ###\n\n");

  printf("Login de administrador!\n\nDigite a sua senha: ");

  scanf("%s",senhadigitada);

	

 comparação = strcmp(senhadigitada, "admin");

	

 if(comparação == 0)

	{

 

 sistema("cls");

 para(laco=1; Laco=1;)

    {

 setlocale(LC_ALL, "português");// Definindo a linguagem

  

  

  

        printf("### Cartório da EBAC ###\n\n");// inicio do menu

        printf("\t1 - Registrar nomes\n");

        printf("\t2 - consultar nomes\n");

        printf("\t3 - Deletar nomes\n\n");

        printf("\t4 - sair do sistema\n\n"); 

        printf("Esse software é de livre uso dos alunos\n");// fim do menu

 scanf("%d", &opção); armazenando a escolha do usuário

 sistema ("cls"); responsável por limpar a tela

  

        switch(opcao)// inicio da seleção do menu

      {

 Caso 1:

 printf("você escolheu o registro de nomes!\n"); chamada de funcões |

 sistema ("pausa");

 quebrar;

 Caso 2:

          printf("você escolheu consultar nomes!\n");

 sistema ("pausa");

 quebrar;

	   

 Caso 3:

		      printf("você escolheu deletar nomes!\n");

 sistema ("pausa");

 quebrar;

	        

 Caso 4:

          printf("Obrigado por utilizar o sistema!\n");

 retorno 0;

 quebrar;

	   

 inadimplência: 

 printf ("esta opção não está disponível\n");

 sistema ("pausa");

 quebrar;

	    } 

    } 

  }

 mais

    printf("senha incorreta!");

}
