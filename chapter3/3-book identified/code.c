/*
*  book identified
*
* created by Ahmed_Elkhodary
*/

#include <stdio.h>


int main(void)
{   
    int GSI_prefix, Griup_identifier, Publisher_code, Item_number, Check_digit;
	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d",&GSI_prefix, &Griup_identifier, &Publisher_code,
	       &Item_number, &Check_digit);
	
	printf("\n\nGSI prefix: %d\n",       GSI_prefix);
	printf("Griup identifier: %d\n", Griup_identifier);
	printf("Publisher code: %d\n",   Publisher_code);
	printf("Item number: %d\n",      Item_number);
	printf("Check digit: %d",       Check_digit);
	
	
	scanf("%d");
	return 0;       
}
