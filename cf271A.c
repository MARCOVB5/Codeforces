//Beautiful Year

#include <stdio.h>
#define N_max 10

int hasdiffdigs(int n, int *freq_v){

	for (int i = 0; i<N_max; i++)
		freq_v[i] = 0; 

	while (n>0){
		freq_v[n%10]++;
		n/=10;}

	for (int i = 0; i<N_max; i++){
		if (freq_v[i] > 1)
			return 0;}
	
	return 1;}

int main(){
	int freq_v [N_max];
	int y1, y2;
	scanf("%d", &y1);
	y2 = y1 + 1;
	while (!hasdiffdigs(y2, freq_v))
		y2++;
	printf("%d\n", y2);
	return 0;} 
	
