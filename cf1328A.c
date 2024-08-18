//Divisibility Problem

#include <stdio.h>

int main(){

	int t;
	int a, b;

	scanf("%d", &t);

	for (int i = 0; i<t; i++){
		
		scanf("%d", &a, &b);
		
		if (a < b)
			printf("%d\n", b-a);

		else if (a >= b)
			printf("%d\n", b - (a%b));}

		return 0;}
					
