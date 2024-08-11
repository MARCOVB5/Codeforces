//Soldier and Bananas

#include <stdio.h>

int main(){
	long long k, n, w; 
	scanf("%lld %lld %lld", &k, &n, &w);
	long long ans = k * w * (w+1) / 2;
	if (n >= ans)
		printf("%d\n", 0);
	else
		printf("%lld\n", ans - n);
	return 0;}
