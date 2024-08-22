//Helpful Maths

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#define N_MAX 101

int compare_chars(const void *a, const void *b){
    return (*(char*)a - *(char*)b);}

int main(){

	char s[N_MAX];
	char s_sorted[N_MAX];
	char numbers[N_MAX/2 + 2];
	int j = 0;

	scanf("%s", s);
	
	for (int i = 0;	i<strlen(s); i+=2){
		numbers[j] = s[i];
		j++;}

	numbers[j] = '\0';

	qsort(numbers, strlen(numbers), sizeof(char), compare_chars);

	int k = 0;
	for (int i = 0; i<strlen(s); i++){
		if (i%2 == 0)
			s_sorted[i] = numbers[k++];
		else
			s_sorted[i] = '+';}

	s_sorted[strlen(s)] = '\0';

	printf("%s\n", s_sorted);

	return 0;}
		
