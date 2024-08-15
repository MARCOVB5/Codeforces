//Codeforces Checking

#include <stdio.h>
#define CFLEN 11 

int main(){

	char cf[CFLEN] = "codeforces";
	char letter;
	int t, j, cntrl; 

	scanf ("%d", &t);
	getchar();	

	for (int i = 0; i<t; i++){
		cntrl = 0;
		j = 0;
		scanf ("%c", &letter);
		getchar();

		while (cntrl == 0 && j < CFLEN){
			if (letter == cf[j])
				cntrl = 1;
			j++;}

		if (cntrl == 1)
			printf("YES\n");
		else 
			printf("NO\n");}

	return 0;}
