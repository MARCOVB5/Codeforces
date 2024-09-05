//Queue at the School

#include <stdio.h>

#define N_MAX 51

int main(){

	int n, t;
	char queue[N_MAX];
	
	scanf("%d %d", &n, &t);
	scanf("%s", queue);

	for (int i = 0; i<t; i++){
		for (int j = 0; j<n; j++){
			if (queue[j] == 'B' && queue[j+1] == 'G'){
				queue[j] = 'G'; 
				queue[j+1] = 'B';
				j++;}}}

	printf("%s\n", queue);		

	return 0;}	
