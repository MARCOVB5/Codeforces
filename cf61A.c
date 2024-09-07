//Ultra-Fast Mathematician

#include <stdio.h>
#define N_MAX 101

int main(){

	char n1[N_MAX];
	char n2[N_MAX];
	char ans[N_MAX]; 

	scanf("%s %s", n1, n2);

	int i = 0;

	while (n1[i] != '\0'){
		
		if ((n1[i] == '1' && n2[i] == '0')||(n1[i] == '0' && n2[i] == '1'))
			ans[i] = '1';
		else
			ans[i] = '0';

		i++;}

	ans[i] = '\0';

	printf("%s\n", ans);

	return 0;}
			
