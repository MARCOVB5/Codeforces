//Hulk

#include <stdio.h>
#define N_MAX 101

int main(){

	int n, i = 0;

	scanf("%d", &n);

	printf("I hate ");

	if (n >= 2){

		while (i < n-1){

			printf("that ");

			if (i%2 == 0)
				printf("I love ");

			else 
				printf("I hate ");

		i++;}}

	printf("it\n");

	return 0;}
