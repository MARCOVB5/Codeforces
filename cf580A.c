//Kefa and First Steps

#include <stdio.h>

int main(){

	int n;
	int a, aux;
	int seq = 1, 
		max_seq = 1;

	scanf("%d", &n);
	scanf("%d", &aux);

	for (int i = 1; i<n; i++){
		
		scanf("%d", &a);

		if (a >= aux){
			seq++;
			if (seq >= max_seq)
				max_seq = seq;}

		else 
			seq = 1;

		aux = a;}

	printf("%d\n", max_seq);

	return 0;}
