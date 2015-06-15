#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct
{
	char nome[40];
	int numusp;
	float nota1, nota2;
	float media;
} cadastro;

cadastro cad;



int main ()
{
	char flag='S';
	char salvar;
	
	FILE *cadast;
	
	printf(">> Cadastro de Alunos <<\n");
	
	while(flag=='S' || flag == 's')
	{
		fflush(stdin);
		printf("- Nome: ");
		gets(cad.nome);
		strupr(cad.nome);
		printf("- Num USP: ");
		scanf("%d", &cad.numusp);
		printf("- Nota 1: ");
		scanf("%f", &cad.nota1);
		printf("- Nota 2: ");
		scanf("%f", &cad.nota2);
		cad.media = (cad.nota1 + cad.nota2)/2;
		
		printf("\n\n- Nome: %s\n",cad.nome);
		printf("- Num USP: %d\n",cad.numusp);
		printf("- Nota 1: %.2f\n",cad.nota1);
		printf("- Nota 2: %.2f\n",cad.nota2);
		printf("- Media: %.2f\n",cad.media);

		fflush(stdin);
		printf(">> Deseja salvar?(S//N) ");
		scanf("%c", &salvar);
		
		if(salvar =='S' || salvar=='s')
		{
			cadast = fopen("cadastro.txt","wt");
			    if(cadast==NULL) printf(">>ERRO<<");
			    
			fprintf(cadast,"%s\n",cad.nome);
			fprintf(cadast,"%d\n",cad.numusp);
			fprintf(cadast,"%f\n",cad.nota1);
			fprintf(cadast,"%f\n",cad.nota2);
			fprintf(cadast,"%f\n",cad.media);
			fclose(cadast);
			printf("\n>> Salvo com sucesso! <<\n");
		}
		fflush(stdin);
		printf(">> Deseja fazer outro cadastro?(S/N) ");
		scanf("%c", &flag);
		system("cls");
	}
	
	system("PAUSE");
}
			
			
		
	    
	    
	
	
	
