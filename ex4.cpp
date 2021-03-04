#include <stdio.h>

main() {
	int x;
	printf("Insira o valor desejada para o numero : ");
	scanf("%d",&x);
	for (int i = 1;i <= x;i++){
		if (x % i == 0){
			printf("%d\n",i);
		}
	}
}
