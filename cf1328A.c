//Divisibility Problem

#include <stdio.h>

int main(){

	int t;
	int a, b;

	scanf("%d", &t);

	for (int i = 0; i<t; i++){
		
		scanf("%d %d", &a, &b);

		if (a%b == 0)
			printf("%d\n", 0);
		
		else if (a < b)
			printf("%d\n", b-a);

		else if (a >= b)
			printf("%d\n", b - (a%b));}

		return 0;}
					
