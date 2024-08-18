//Sum

#include <stdio.h>

int main(){
	
	int t;
	int a, b, c;

	scanf("%d", &t);

	for (int i = 0; i<t; i++){ 
		
		scanf("%d %d %d", &a, &b, &c);

		if (a >= b && a >= c){
			if (b+c == a)
				printf("YES\n");
			else 
				printf("NO\n");} 

		else if (b >= a && b >= c){
			if (a+c == b)
				printf("YES\n");
			else 
				printf("NO\n");}

		else if (c >= a && c >= b){
			if (a+b == c)
				printf("YES\n");
			else
				printf("NO\n");}}

	return 0;}
