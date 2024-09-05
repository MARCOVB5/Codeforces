//Magnets

#include <stdio.h>
#define MAGN_SIZE 3

void copy_magnets(char *str1, char *str2){
	for (int i = 0; i<MAGN_SIZE-1; i++){
		str2[i] = str1[i];
	str2[MAGN_SIZE-1] = '\0';}}

int main(){

	int groups = 1; //we always begin with a group
	int n;
	char magnet[MAGN_SIZE];
	char prev_magnet[MAGN_SIZE]; 

	scanf("%d", &n);
	scanf("%s", prev_magnet);

	for (int i = 0; i<n-1; i++){

			scanf("%s", magnet);

			if (magnet[MAGN_SIZE-2] != prev_magnet[MAGN_SIZE-2])
				groups++;

			copy_magnets(magnet, prev_magnet);}

	printf("%d\n", groups);

	return 0;}
