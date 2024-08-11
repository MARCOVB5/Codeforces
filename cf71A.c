//Way Too Long Words

#include <stdio.h>
#include <string.h>
#define N_max 101 //max amount of characters on a string

int main(){
	int n;
	char word[N_max];
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%s", word);
		if (strlen(word) > 10)
			printf("%c%d%c\n", word[0], strlen(word)-2, word[strlen(word) - 1]);	
		else 
			printf("%s\n", word);}
	return 0;}
