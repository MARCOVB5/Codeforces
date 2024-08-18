//Tram

#include <stdio.h>

int main(){
	int n;
	int sum = 0, 
		sum_max = -1;
	int a, b;

	scanf("%d", &n);

	for (int i = 0; i<n; i++){
			
		scanf("%d %d", &a, &b);

		sum = sum - a + b;

		if (sum > sum_max)
			sum_max = sum;}

	printf("%d\n", sum_max);

	return 0;}
