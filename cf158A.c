//Next Round

#include <stdio.h>
#define N_max 101

int main(){

	int n, k;
	int v[N_max];
	int aux;
	int sum=0;

	scanf("%d %d", &n, &k);
	
	for (int i = 0; i<n; i++){
		scanf("%d", &v[i]);
		if (i == k-1)
			aux = v[i];}

	for (int i = 0; i<n; i++){
		if (v[i] >= aux && v[i] > 0)
			sum++;}

	printf("%d\n", sum);
	
	return 0;}
	
