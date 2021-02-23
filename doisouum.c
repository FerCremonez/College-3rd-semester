#include<stdio.h>


main()
{
int a,b,c;
printf("Jogador A (2 ou 1):)");
scanf("%d",&a);
printf("Jogador B (2 ou 1):)");
scanf("%d",&b);
printf("Jogador C (2 ou 1):)");
scanf("%d",&c);
if ((a==b) && (a==c))
printf("Jogo empatado");
else
if (b==c)
printf("Jogador A venceu!");
else
if (a==c)
printf("Jogador B venceu!");
else
printf("Jogador C venceu!");
}
