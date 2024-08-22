//Young Physicist

#include <stdio.h>
#include <stdlib.h>

int main(){

	int n;
	int **mat;
	int sum;
	int eq = 1; //we consider that at first it is in equilibrium

	scanf("%d", &n);

	mat = (int**) malloc(n  * sizeof(int*));

	for (int i = 0; i<n; i++)
		mat[i] = (int*) malloc(3 * sizeof(int));

	for (int i = 0; i<n; i++){
		for (int j = 0; j < 3; j++)
			scanf("%d", &mat[i][j]);}

	for (int i = 0; i<3; i++){
		sum = 0;
		for (int j = 0; j < n; j++)
			sum += mat[j][i];
		if (sum != 0)
			eq = 0;}

	if (eq == 0)
		printf("NO\n");
	else
		printf("YES\n");

	for (int i = 0; i<n; i++)
		free(mat[i]);
	free(mat);

	return 0;}
