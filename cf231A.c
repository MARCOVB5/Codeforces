//Team

#include <stdio.h>

int main(){
	int n, cont;
	cont = 0;
	scanf("%d", &n);
	for (int i = 0; i<n; i++){
		int n1, n2, n3;
		scanf("%d %d %d", &n1, &n2, &n3);
		if (n1+n2+n3 >= 2)
			cont++;}
	printf("%d\n", cont);
	return 0;}
			
