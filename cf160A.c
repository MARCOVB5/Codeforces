//Twins

#include <stdio.h>
#include <stdlib.h>
#define N_MAX 100 

int compare(const void *a, const void *b){
    return (*(int*)a - *(int*)b);}

int main(){

	int n, a; 
	int total_sum = 0;
	int total_coins = 0;
	int coins[N_MAX];

	scanf("%d", &n);

	for (int i = 0; i<n; i++){
		
		scanf("%d", &a);
		total_sum += a;

		coins[i] = a;}

	qsort(coins, n, sizeof(int), compare);

	int j = n-1; 
	int part_sum = 0;
	
	while (part_sum <= total_sum/2){
		part_sum += coins[j];
		j--;}

	printf("%d", (n-1) - j);

	return 0;}
