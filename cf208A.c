//Dubstep

#include <stdio.h>
#include <string.h>
#define N_MAX 201

int main(){
	
	char s[N_MAX];
	char song[N_MAX];
	int wub_pos[N_MAX];

	scanf("%s", s);

	if (strlen(s) <= 2){ //extreme case
		printf("%s\n", s);
		return 0;}

	for (int i = 0; i<N_MAX; i++)
		wub_pos[i] = 0;

	for (int i = 0; i<strlen(s)-2; i++){
		if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
			wub_pos[i]++; wub_pos[i+1]++; wub_pos[i+2]++;
			i+=2;}}

    int inside_word = 0;

    for (int i = 0; i < strlen(s); i++){
        if (!wub_pos[i]) {            
			if (inside_word == 0 && i != 0)
                printf(" ");
            printf("%c", s[i]);              
			inside_word = 1;} 
			else{
            	inside_word = 0;}}

	printf("\n");

	return 0;}		
