//Gravity Flip

#include <stdio.h>
#define N_MAX 100

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);}

int main(){

	int n;
	int v[N_MAX];

	scanf("%d", &n);

	for (int i = 0; i<n; i++)
		scanf("%d", &v[i]);

	qsort(v, n, sizeof(int), compare);

	for (int i = 0; i<n; i++)
		printf("%d ", v[i]);
	printf("\n");

	return 0;}
