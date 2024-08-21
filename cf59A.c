//Word

#include <string.h>
#include <stdio.h>
#define N_MAX 101

int main(){

	char s[N_MAX];
	int count_up = 0; //counting uppercases
	
	scanf("%s", s);

	for (int i = 0; i<= strlen(s) - 1; i++){
		if (s[i] >= 'A' && s[i] <= 'Z')
			count_up++;}

	if (count_up > (strlen(s))/2){
		for (int i = 0; i<= strlen(s) - 1; i++){
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 'a' + 'A';}}

	else{
		for (int i = 0; i<= strlen(s) - 1; i++){
			if (s[i] >= 'A' && s[i] <= 'Z')
				s[i] = s[i] - 'A' + 'a';}}

	printf("%s\n", s);

	return 0;}
