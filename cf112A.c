//Petya and Strings

#include <stdio.h>
#define N_MAX 101

void lowercasefication(char *string){
	for (int i = 0; string[i] != '\0'; i++){
		if (string[i] >= 'A' && string[i] <= 'Z')
			string[i] = string[i] - 'A' + 'a';}}

int main(){
	
	char s1[N_MAX];
	char s2[N_MAX];

	int i = 0, control = 0;

	scanf ("%s", s1); 
	scanf ("%s", s2);

	lowercasefication(s1);
	lowercasefication(s2);

	while (s1[i] != '\0'){

		if (s1[i] > s2[i]){
			control = 1;
			break;}

		else if (s1[i] < s2[i]){
			control = -1;
			break;}

		i++;}

	printf("%d\n", control);

	return 0;}
	
