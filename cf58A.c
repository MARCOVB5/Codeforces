//Chat room

#include <stdio.h>
#define N_MAX 101

int main(){

	char s[N_MAX];
	int i = 0;
	int contrl = 0;

	scanf("%s", s);	

	while (s[i] != '\0'){

		if (s[i] == 'h' && contrl == 0)
			contrl++;
		else if (s[i] == 'e' && contrl == 1)
			contrl++;
		else if (s[i] == 'l' && contrl == 2)
			contrl++;
		else if (s[i] == 'l' && contrl == 3)
			contrl++;
		else if (s[i] == 'o' && contrl == 4)
			contrl++;
		
		i++;}

	if (contrl == 5)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;}
