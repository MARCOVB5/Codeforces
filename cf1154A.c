//Restoring Three Numbers

#include <stdio.h>
#define N 4

int main(){
	int x, y, z, t;
	int v[N];
	int index, max = -1;

	scanf("%d %d %d %d", &x, &y, &z, &t);

	v[0] = x; v[1] = y; v[2] = z; v[3] = t;

	for (int i = 0; i < N; i++){
		if(v[i] > max){
			max = v[i];
			index = i;}}
	
	for (int i = 0; i < N; i++){
		if (i != index)
			printf("%d ", max - v[i]);}

	printf("\n");

	return 0;}
