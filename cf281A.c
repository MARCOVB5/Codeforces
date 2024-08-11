//Word Capitalization

#include <stdio.h>
#define N_max 1001

int main(){
	char string[N_max];
	scanf("%s", string);
	if (string[0] <= 'z' && string[0] >= 'a')
		string[0] = string[0] - ' ';
	printf("%s\n", string);
	return 0;} 
