//George and Accommodation

#include <stdio.h>

int main(){
	int n;
	int p, q;
	int count = 0; 	

	scanf("%d", &n);
	
	for (int i = 0; i<n; i++){
		scanf("%d %d", &p, &q);
		if (q - p >= 2)
			count++;}
	
	printf("%d\n", count);

	return 0;}
