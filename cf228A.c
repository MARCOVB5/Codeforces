//Is your horseshoe on the other hoof

#include <stdlib.h>
#include <stdio.h>
#define N_MAX 4

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);}

int main(){
	
	int v[N_MAX];
	int n = sizeof(v)/sizeof(v[0]);
	int sum = 0;

	scanf("%d %d %d %d", &v[0], &v[1], &v[2], &v[3]);

	qsort(v, n, sizeof(int), compare);

	for (int i = 0; i<N_MAX-1; i++){
		if (v[i] == v[i+1])
			sum++;}

	printf("%d\n", sum);

	return 0;}
