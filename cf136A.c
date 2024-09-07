//Presents

#include <stdio.h>
#define N_MAX 100

int main(){

	int n, p;
	int v[N_MAX];
	
	scanf("%d", &n);

	for (int i = 0; i<n; i++){
		scanf("%d", &p);
		v[p-1] = i+1;}

	for (int i = 0; i<n; i++)
		printf("%d ", v[i]);
	printf("\n");

	return 0;}
