/*
* phone numbers
*
* created by Ahmed_Elkhodary
*/


#include <stdio.h>


int main(void)
{   
    int n1, n2, n3;
	printf("Enter phone number [(xxx) xxx-xxxx] : ");
	scanf("(%d) %d-%d", &n1, &n2, &n3);
	
	printf("\nYou entered %d.%d.%d",n1, n2, n3);
	
	
	scanf("%d");
	return 0;       
}
