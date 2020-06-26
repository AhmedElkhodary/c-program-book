/*
*  program ask the user to enter two digit number and print reversed
*
* created by Ahmed_Elkhodary
*/

#include <stdio.h>


int main(void)
{
	int n1, n2;
	
	printf("---------------two digit number-------------\n\n");
	printf("Plese Enter Two Digit Number: ");
	scanf("%d",&n1);
	
	printf("\n\nThe Reversal: %d%d", n1%10, n1/10);
	
	
	
	printf("\n\n---------------there digit number-------------\n\n");
	printf("Plese Enter There Digit Number: ");
	scanf("%d",&n2);
	
	printf("\n\nThe Reversal: %d%d%d", n2%10, n2/10%10, n2/100);	
	
	
	
	scanf("%d");
	return 0;
}
