//A+B Again

#include <stdio.h>

int main(){
	int a, b;
	int t, n;
	scanf("%d", &t);
	for (int i = 0; i<t; i++){
		scanf("%d", &n);
		while (n >= 10){
			a = n%10;
			n /= 10;}
		b = n%10;
		
		printf("%d\n", a+b);}
	return 0;}
	
	
