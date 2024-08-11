//Elephant

#include <stdio.h>
#define N 5

int main(){
	int v[N];
	int x, cont = 0;
	
	scanf("%d", &x);
	
	for (int i = 0; i<N; i++)
		v[i] = i+1;
	
	int i = N-1;

	while (x>0){
		while (x >= v[i]){
			x -= v[i];
			cont++;}
		if (x < v[i])
			i = i -1;}

	printf("%d\n", cont);
	return 0;}			
			
