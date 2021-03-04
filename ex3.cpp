#include <stdio.h>

int main()
{
	char letra;
	
	do
	{
		puts("Insira uma letra ou (z) para encerrar o programa.");
		fflush(stdin); //Limpando buffer do teclado
		scanf("%c", &letra);
		if (letra != 'z');
			printf("Letra: %c\n",letra );
		
		
	} while(letra != 'z');
}
