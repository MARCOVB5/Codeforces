//T-primes

//ideia:
//como se trata de uma busca binária, buscar alguma lógica 
//que esteja ligada com chutar algum valor 

#include <stdio.h>
#define n_max 100000

int isTprime(long long int num){
	int count = 2; //already considering div = 1 and div = n
	long long int top = num/2;
	long long int bas = 1;
	
	while (){

		if (num%top == 0){
			count++;


	if (count == 3)
		return 1;

	else
		return 0;}	


int main(){
	int n;
	long long int x;
	
	scanf("%d", &n);

	for (int i = 0; i<n; i++){
		scanf("%lld", &x);
		if (isTprime(x))
			printf("YES\n");
		else 
			printf("NO\n");}

	return 0;}	
