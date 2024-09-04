//Three Brothers

#include <stdio.h>

int main(){
	int a, b;
	scanf ("%d %d", &a, &b);
	printf("%d\n", 3 - (a+b)%3);
	return 0;}
