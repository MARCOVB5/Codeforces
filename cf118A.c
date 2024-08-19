//String Task

#include <stdio.h>
#define N_MAX 101
#define VOWEL 13

int main(){
	
	char string[N_MAX];
	char newstring[N_MAX*2];
	char vect[VOWEL] = {'A','a','O','o','Y','y','E','e','U', 'u', 'I', 'i'};
	int control, 
		k = 0, 	
		i = 0;

	scanf("%s", string);
	
	while (string[i] != '\0'){

		control = 1;

		for (int j = 0; j<VOWEL; j++){
			if (string[i] == vect[j])
				control = 0;}

		if (control == 1){ //letter at position i is consonant
			newstring[k++] = '.';
			if (string[i] <= 'Z' && string[i] >= 'A')
				newstring[k++] = string[i] - 'A' + 'a';
			else
				newstring[k++] = string[i];}
		
		i++;}
		
		newstring[k] = '\0';

		printf("%s\n", newstring);	

		return 0;}
			
