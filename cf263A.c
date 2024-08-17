//Beautiful Matrix

#include <stdlib.h>
#include <stdio.h>
#define N_MAX 5

int main(){
	
	int x, y;
	int mat[N_MAX][N_MAX];

	for (int i = 0; i<N_MAX; i++){
		for (int j = 0; j<N_MAX; j++){
			scanf("%d", &mat[i][j]);
			if (mat[i][j] == 1){
				x = i;
				y = j;}}}

	printf("%d\n", abs(2 - x) + abs(2 - y));

	return 0;}
