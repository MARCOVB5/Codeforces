//Next Round

#include <stdio.h>
#define N_max 101

int main(){

	int a, n, k, count = 0;
	int v[N_max];

	scanf("%d %d", &n, &k);

	for (int i = 0; i<n; i++)
		scanf("%d", &v[i]);

	for (int i = 0; i<n; i++){
		if (v[i] >= v[k] && v[i] > 0)
			count++;}

	printf("%d\n", count);

	return 0;}
			
	
