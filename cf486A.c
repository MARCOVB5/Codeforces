//Calculating Function

#include <stdio.h>

long long int ceilfunc(long double d){
	long long int int_part = (long long int) d;

	if (d == (long double) int_part)
		return int_part;
	
	if (d > 0)
		return int_part + 1;
	
	return int_part;}


int main(){
	long long int n;
	scanf("%lld", &n);
	if (n%2 == 0)
		printf("%lld\n", ceilfunc(n/2.0));
	else
		printf("%lld\n", -ceilfunc(n/2.0));
	return 0;}
