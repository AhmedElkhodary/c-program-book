/*
*  Program calculate the remaining balance
*
*  CREATED BY Ahmed_Elkhodary
*/

#include <stdio.h>

int main(void)
{
	float amount_of_loan, interest_rate, monthly_payment;
	
	printf("Enter amount of loan: ");
	scanf("%f",&amount_of_loan);
	
	printf("Enter interest rate: ");
	scanf("%f",&interest_rate);
	
	printf("Enter monthly payment: ");
	scanf("%f",&monthly_payment);
	
	
	amount_of_loan += amount_of_loan * ((interest_rate/100) / 12);
    amount_of_loan -= monthly_payment; 
    printf("\nBalance remaining after first payment : $%.2f\n",amount_of_loan);
    
    amount_of_loan += amount_of_loan * ((interest_rate/100) / 12);
    amount_of_loan -= monthly_payment; 
    printf("Balance remaining after second payment : $%.2f\n",amount_of_loan);
    
    amount_of_loan += amount_of_loan * ((interest_rate/100) / 12);
    amount_of_loan -= monthly_payment; 
    printf("Balance remaining after third payment  : $%.2f\n",amount_of_loan);
	
	
	scanf("%d");
	return 0;
}
