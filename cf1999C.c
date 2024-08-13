//Showering

#include <stdio.h>

int main(){
	int t;
	int n, s, m;
	int l, r, r_aux;
	int control;

	scanf("%d", &t);

	for (int j = 0; j<t; j++){

		scanf("%d %d %d", &n, &s, &m);
		control = 0; 
	
		for (int i = 0; i<n; i++){

			scanf("%d %d", &l, &r);

			if (i == 0 && l>= s) //extreme case
				control = 1; 
			
			else if (i>0 && l - r_aux >= s)
				control = 1;

			else if (i == n-1 && m - r >= s) //extreme case
				control = 1;
	
			r_aux = r;}

		if (control == 1)
			printf("YES\n");

		else 
			printf ("NO\n");}

		

		return 0;}
					 
			
				
					
