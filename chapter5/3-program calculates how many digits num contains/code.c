/*
* program calculates how many digits num contains
*
* created by Ahmed_Elkhodary
*/

#include <stdio.h>


int main(void)
{
	int num;
	printf("Enter the namber: ");
	scanf("%d",&num);
	
	
	if      (num <= 9) printf("\nThe number %d has 1 digits", num);
	else if (num <= 99) printf("\nThe number %d has 2 digits", num);
	else if (num <= 999) printf("\nThe number %d has 3 digits", num);
	else if (num <= 9999) printf("\nThe number %d has 4 digits", num);
	else                   printf("\nerror large number");
    
    
    scanf("%d");
    return 0;
}
