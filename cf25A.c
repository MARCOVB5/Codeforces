//IQ test

#include <stdio.h>
#define n_max 101

int main(){
	int v[n_max];
	int n;
	int count_even = 0,
		count_odd = 0;

	scanf("%d", &n);
	
	for (int i = 0; i<n; i++){
		scanf("%d", &v[i]);
		if (v[i]%2 == 0)
			count_even++;
		else
			count_odd++;}

	if (count_even > count_odd){
		int j = 0;
		while (j<n){
			if (v[j]%2 != 0){
				printf("%d\n", j+1);
				break;}
			j++;}}

	else{
		int j = 0; 
		while (j<n){
			if (v[j]%2 == 0){
				printf("%d\n", j+1);
				break;}
			j++;}}

	return 0;}
	
