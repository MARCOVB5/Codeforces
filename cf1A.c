//Theatre Square

#include <stdio.h>

int main(){
	long long len, height;
	//we'll analyse how many blocks we would need to 
	//cover at least the lenght of the rectangle
	//and then we will multiply this value by 
	//the number of blocks we need to cover the height.

	long long n,m,a;

	scanf("%lld %lld %lld", &n, &m, &a);
	
	len = (n + a - 1)/a;  //rounded up 
	height = (m + a - 1)/a;
	
	long long ans = len*height;

	printf("%lld\n", ans);

	return 0;}
	
