//Holiday of Equality

#include <stdio.h>
#define N_MAX 101

int main(){

	int v[N_MAX];
	int n;
	int sum = 0;
	int max = -1;

	scanf("%d", &n);

	for (int i = 0; i<n; i++){
		scanf("%d", &v[i]);
		if (v[i] > max)
			max = v[i];}

	for (int i = 0; i<n; i++){
		if (v[i] < max)
			sum += max-v[i];}

	printf("%d\n", sum);	

	return 0;}
