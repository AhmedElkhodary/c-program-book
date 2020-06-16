/*
*  program calculate amount and print $20 $10 $5 $1
*
*  created by Ahmed_Elkhodary
*/

#include <stdio.h>

int main(void)
{
	int amount , _a20, _a10, _a5, _a1; 
	printf("Enter a dollar amount: ");
	scanf("%d",&amount);
	
	_a20 = amount / 20 ;
	amount %= 20;
	
	_a10 = amount / 10 ;
	amount %= 10;
	
	_a5 = amount / 5 ;
	amount %= 5;
	
	_a1 = amount;
	
	
	printf("$20 bills: %d\n", _a20);
	printf("$10 bills: %d\n", _a10);
	printf("$5  bills: %d\n", _a5);
	printf("$1  bills: %d\n", _a1);
	
	scanf("%d");
	return 0;
}
