#include <stdio.h> //Biblioteca de Comunidade com o Usu�rio

#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria

#include <locale.h> //biblioteca de aloca��es de texto por registro

#include <string.h>//biblioteca respons�vel por cuidar das string

int registro()

   {    

   

 arquivo char [40]; inicio da cria��o de vari�veis/string

 CPF CHAR [40];

  char nome [40];

  char sobrenome [40];

 char cargo [40];//final de cria��o de vari�veis/string

  

   

 printf("digite o CPF a ser cadastrado :"); coletando informa��es do usu�rio

 scanf("%s", cpf);//%s refere-se a uma cadeia de caracteres

   

 strcpy(arquivo, CPF);// respons�vel por copiar os valores das string

   

  FILE *file;// cria o arquivo

  file = fopen(arquivo, "w");// cria o arquivo

 fprintf(file,CPF);//salva o valor da vari�vel

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

 setlocale(LC_ALL, "portugu�s");// Definindo a linguagem

 	

 CPF Char[40];

 	char conteudo[200];

 	

 	printf("Digite o cpf a ser consultado: ");

 	scanf("%s",cpf);

 	

 ARQUIVO *arquivo;

 arquivo = fopen(cpf,"r");

 	

 	if(file == NULL);

 	

 	{

 printf("N�o foi poss�vel abrir o arquivo, n�o localizado!. \n");

	}

   

 while(fgets(conteudo, 200, arquivo) != NULL)

   

  {

 printf("\nEssas s�o as informa��es do usu�rio: ");

 printf("%s", conte�do);

  	printf("\n\n");

	}

 	 

 sistema ("pausa");

 	 

   

 }

 

 int deletar()

{

 CPF Char[40];

 	

 	printf("Digite o CPF do usu�rio a ser deletado: ");

  scanf("%s",cpf);

   

 remover (CPF);

   

 ARQUIVO *arquivo;

 arquivo = fopen(cpf,"r");

   

  if(file == NULL)

  {

 

 printf("O usu�rio n�o se encontra no sistema!. \n");

 sistema ("pausa");

   

  }

}

int main()

{

 int op��o=0; definindo vari�veis

	int laco=1;

  char senhadigitada[40]="a";

 int compara��o;

	

  printf("### Cart�rio da EBAC ###\n\n");

  printf("Login de administrador!\n\nDigite a sua senha: ");

  scanf("%s",senhadigitada);

	

 compara��o = strcmp(senhadigitada, "admin");

	

 if(compara��o == 0)

	{

 

 sistema("cls");

 para(laco=1; Laco=1;)

    {

 setlocale(LC_ALL, "portugu�s");// Definindo a linguagem

  

  

  

        printf("### Cart�rio da EBAC ###\n\n");// inicio do menu

        printf("\t1 - Registrar nomes\n");

        printf("\t2 - consultar nomes\n");

        printf("\t3 - Deletar nomes\n\n");

        printf("\t4 - sair do sistema\n\n"); 

        printf("Esse software � de livre uso dos alunos\n");// fim do menu

 scanf("%d", &op��o); armazenando a escolha do usu�rio

 sistema ("cls"); respons�vel por limpar a tela

  

        switch(opcao)// inicio da sele��o do menu

      {

 Caso 1:

 printf("voc� escolheu o registro de nomes!\n"); chamada de func�es |

 sistema ("pausa");

 quebrar;

 Caso 2:

          printf("voc� escolheu consultar nomes!\n");

 sistema ("pausa");

 quebrar;

	   

 Caso 3:

		      printf("voc� escolheu deletar nomes!\n");

 sistema ("pausa");

 quebrar;

	        

 Caso 4:

          printf("Obrigado por utilizar o sistema!\n");

 retorno 0;

 quebrar;

	   

 inadimpl�ncia: 

 printf ("esta op��o n�o est� dispon�vel\n");

 sistema ("pausa");

 quebrar;

	    } 

    } 

  }

 mais

    printf("senha incorreta!");

}
