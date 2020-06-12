/*
* program print square for even numbers between (1 to n) number
*
* created by Ahmed_Elkhodary
*/

#include <stdio.h>


main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	int i = 1;
	while( i*i <= n){
		
		if ( i % 2 == 0)
		printf("%d\n", i * i);
		
		i++;
	}
	 
	
	scanf("%d");
}
