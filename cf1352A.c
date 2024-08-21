//Sum of Round Numbers

#include <stdio.h>

int main(){
	
	int t;
	int n;
	int pot;
	int sum;

	scanf("%d", &t);

	for (int i = 0; i<t; i++){
		pot = 1;
		sum = 0;

		scanf("%d", &n);

		int aux = n; 

		while (aux > 0){
			if (aux%10 != 0)
				sum++;
			aux /= 10;}

		printf("%d\n", sum);

		while (n > 0){
			if (n%10 != 0)
				printf("%d ", pot*(n%10));
			n /= 10;
			pot *= 10;}

		printf("\n");}	

	return 0;}
