//Anton and Danik

#include <stdio.h>
#include <stdlib.h>

int main(){

	int n; 
	char *games;
	int anton = 0,
		danik = 0;

	scanf("%d", &n);

	games = (char*) malloc (n * sizeof(char) + 1);

	scanf("%s", games);

	for (int i = 0; i<n; i++){
		if (games[i] == 'A')
			anton++;
		else 
			danik++;}

	if (anton > danik)
		printf("Anton\n");
	else if (danik > anton)
		printf("Danik\n");
	else
		printf("Friendship\n");
	
	free(games);

	return 0;}
