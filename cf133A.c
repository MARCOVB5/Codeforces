//HQ9+

#include <stdio.h>
#include <string.h>
#define N_MAX 101

int main(){
	
	char p[N_MAX];
	int i = 0,
		contrl = 0;

	scanf("%s", p);

	while (i < strlen(p) && contrl == 0){
		if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9')
			contrl = 1;
		i++;}

	if (contrl == 0)
		printf("NO\n");
	else 
		printf("YES\n");

	return 0;}
