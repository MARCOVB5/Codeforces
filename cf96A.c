//Football

#include <string.h>
#include <stdio.h>
#define N_MAX 101

int main(){
	
	char s[N_MAX];
	int sum = 1;
	int dang = 0;

	scanf("%s", s);

	for (int i = 0; i < strlen(s) - 1; i++){

		if (s[i] == s[i+1])
			sum++;

		else
			sum = 1;

		if (sum >= 7){
			dang = 1;
			break;}}

	if (dang == 1)
		printf("YES\n");
	else 
		printf("NO\n");

	return 0;}
