//I Wanna Be the Guy

#include <stdio.h>
#define N_MAX 100

int main(){

	int freq[N_MAX];
	int n, a, p, contrl = 0;
	
	scanf("%d", &n);

	for (int i = 0; i<n; i++)
		freq[i] = 0;

	for (int i = 0; i<=1; i++){

		scanf("%d", &p);

		for (int j = 0; j<p; j++){
			scanf("%d", &a);
			freq[a-1]++;}}

	int i = 0;

	while (i<n && contrl == 0){
		if (freq[i] == 0)
			contrl = 1;
		i++;}

	if (contrl == 1)
		printf("Oh, my keyboard!\n");
	else 
		printf("I become the guy.\n");

	return 0;}
