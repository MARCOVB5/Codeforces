//Anton and Polyhedrons

#include <stdio.h>
#define N_MAX 13

int main(){

	int n;
	int total_sum = 0;
	char s[N_MAX];

	scanf("%d", &n);

	for (int i = 0; i<n; i++){
		
		scanf("%s", s);

		if (s[0] == 'T')
			total_sum += 4;
		else if (s[0] == 'C')
			total_sum += 6;
		else if (s[0] == 'O')
			total_sum += 8;
		else if (s[0] == 'D')
			total_sum += 12;
		else
			total_sum += 20;}

	printf("%d\n", total_sum);

	return 0;}	
