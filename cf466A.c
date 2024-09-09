//Cheap Travel

#include <stdio.h>

int main(){

	int n, m, a, b;

	scanf("%d %d %d %d", &n, &m, &a, &b);

	if (a < (float) b/m){
		printf("%d\n", a*n);
		return 0;}

	else {
		
		int money_spent = 0;

		while (n >= m){
			money_spent += b;
			n -= m;}

		if (n > 0){
			if (b <= a*n)
				money_spent += b;
			else
				money_spent += a*n;}

		printf("%d\n", money_spent);}

	return 0;}
