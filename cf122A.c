//Lucky Division

#include <stdio.h>

int itslucky(int n){

	while (n > 0){
		if (n%10 != 4 && n%10 != 7)
			return 0;
		n/=10;}
	
	return 1;}

int main(){

	int n, ok = 0;

	scanf("%d", &n);

	for (int i = 1; ok == 0 && i <= n; i++){
		if (n%i == 0 && itslucky(i)){	
			printf("YES\n");
			ok = 1;}}

	if (ok == 0)
		printf("NO\n");

	return 0;}	
		
			
