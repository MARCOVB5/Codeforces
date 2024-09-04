//Vanya and Fence

#include <stdio.h>

int main(){

	int n, h;
	int a; 
	int width = 0; 

	scanf("%d %d", &n, &h);

	for (int i = 0; i<n; i++){
		scanf("%d", &a);
		if (a > h)
			width += 2; 
		else 
			width++;}

	printf("%d\n", width);

	return 0;} 
