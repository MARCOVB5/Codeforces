//Nearly Lucky Number

#include <stdio.h>

int main(){
	long long int n;
	int count = 0;
	scanf("%lld", &n);
	while (n > 0){
		if (n%10 == 7 || n%10 == 4)
			count++;
		if (count > 7)
			break;
		n /= 10;}
	if (count == 4 || count == 7)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;}
