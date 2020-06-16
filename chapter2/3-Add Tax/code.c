/*
* add tax 
*
* created by Ahmed_Elkhodary
*/

#include <stdio.h>
int main(void)
{
	float amount,tax ;
	
	printf("ENTER THE AMOUNT: ");
	scanf("%f",&amount);

	printf("ENTER THE Tax( 0 to 100 ): ");
	scanf("%f",&tax);
	tax =  amount * (tax/100);

	printf("%.2f",amount + tax);
	
	scanf("%d");
	return 0; 
}
