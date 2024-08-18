//Boy or Girl

#include <stdio.h>
#define N_MAX 101
#define LETTERS 27

int main(){
	
	char name[N_MAX];
	int freq_vec[LETTERS];
	int i = 0;
	int sum = 0;

	for (int j = 0; j<LETTERS; j++)
		freq_vec[j] = 0; //initializing the frequence vector
	
	scanf("%s", &name);

	while (name[i] != '\0'){
		freq_vec[name[i] - 'a']++;
		if (freq_vec[name[i] - 'a'] == 1)
			sum++;
		i++;}

	if (sum%2 != 0)
		printf("IGNORE HIM!\n");
	else
		printf("CHAT WITH HER!\n");

	return 0;}
		
