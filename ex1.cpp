#include <stdio.h>

main()
{
	int a,b,c;

	puts("Jogador A digite 2 ou 1:");
	scanf("%d", &a);
	
	puts("Jogador B digite 2 ou 1:");
	scanf("%d", &b);
	
	puts("Jogador C digite 2 ou 1:");
	scanf("%d", &c);
	
	if((a==b) && (a==c))
		puts("Jogo empatado!");
	else
		if (b==c)
			puts("A venceu o jogo!");
		else
			if (a==c)
				puts("B venceu o jogo!");
			else
				puts("C venceu o jogo!");			
}
