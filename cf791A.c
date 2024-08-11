//Bear and Big Brother

#include <stdio.h>

int main(){

	int limak, bob, count = 0;

	scanf("%d %d", &limak, &bob);

	while (limak <= bob){
		limak = limak*3;
		bob = bob*2;
		count++;}

	printf("%d\n", count);

	return 0;}
