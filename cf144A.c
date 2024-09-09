//Arrival of the General

#include <stdio.h>

int main(){

	int n;
	int h;
	int h_max, h_min, pos_max, pos_min;

	scanf("%d", &n);
	scanf("%d", &h);
	h_max = h_min = h;
	pos_max = pos_min = 1;

	for (int i = 1; i<n; i++){
		
		scanf("%d", &h);

		if (h > h_max){
			h_max = h;
			pos_max = i+1;}

		else if (h <= h_min){
			h_min = h;
			pos_min = i+1;}}

	if (pos_max > pos_min)
		printf("%d\n", (n-pos_min) + (pos_max -2));
	else 
		printf("%d\n", (n-pos_min) + (pos_max - 1));

	return 0;}
