/*
*  program that ask the user to enter the amount and dispalys tax due
*
* created by Ahmed_Elkhodary
*/


#include <stdio.h>


int main(void)
{
	float income;
	printf("Income           Amount of tax     \n");
	printf("Not over$750     1%% of income     \n");
	printf("$750-$2,250      $7.50    plus 2%% \n");
	printf("$2,250-$3,750    $37.50   plus 3%% \n");
    printf("$3,750-$5,250    $82.50   plus 4%% \n");	
    printf("$5,250-$7,000    $142.50  plus 5%% \n");	
    printf("$Over$7,000      $230.00  plus 6%% \n");
	/*-------------------------------------------------------------*/
	
	printf("\nEnter the income: ");
	scanf("%f",&income);	
	
	if (income <= 750)         income = 0      + (1.01 * income); 
	else if (income <= 2250)   income = 7.50   + (1.02 * income); 	
	else if (income <= 3750)   income = 37.50  + (1.03 * income); 	
	else if (income <= 5250)   income = 82.50  + (1.04 * income); 	
	else if (income <= 7000)   income = 142.50 + (1.05 * income); 
	else                       income = 230.50 + (1.06 * income); 
	
		
	printf("The Income With Tax = %.2f ", income);
	
	scanf("%d");
	return 0;
}
