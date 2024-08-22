//Even Odds

#include <stdio.h>

int main(){
	
	long long int n, k;

	scanf("%lld %lld", &n, &k);

	if (k <= n/2 + n%2) //odd part
		printf("%lld\n", 2*k - 1);

	else //even part
		printf("%lld\n", 2*(k - n/2 - n%2));

	return 0;}
		
