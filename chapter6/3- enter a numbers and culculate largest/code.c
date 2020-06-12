/*
* enter a numbers and culculate largest
*
* created by Ahmed_Elkhodary
*/

#include<stdio.h>

 main(void)
{
	float largest = 0, n;
	while(1){
		
		printf("Enter a number or quit(-1): ");
		scanf("%f",&n);
		
		if( n <= 0){
			break;
		}
		else if (n > largest){
			largest = n;
	    }
		
	}
	printf("The largesr number entered was %.2f",largest);
	scanf("%d");
	
}
