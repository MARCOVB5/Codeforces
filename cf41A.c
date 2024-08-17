//Translation

#include <stdio.h>
#include <string.h>
#define N_MAX 101

int main(){
	
	char s[N_MAX], t[N_MAX];

	scanf("%s", s);
	scanf("%s", t);

	int i = 0;
	int control = 1;	

	if (strlen(s) != strlen(t))
		control = 0;

	while (s[i] != '\0' && control == 1){
		if (s[i] != t[strlen(t) - 1 - i])
			control = 0;
		i++;}

	if (control == 1)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;}
