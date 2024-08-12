//IQ test

#include <stdio.h>

int main(){
	int n, num, evenss; 
	scanf("%d", &n);
	scanf("%d", &num);
	if (num%2 == 0)
		evenss = 1; 
	else
		evenss = 0;
	
	int aux = evenss;
	int i = 0;

	while (aux == evenss && i<n){
		scanf("%d", &num);
		if (num%2 == 0)
			aux = 1;
		else
			aux = 0;
		i++;}

	printf("%d\n", i+1);

	return 0;}		
