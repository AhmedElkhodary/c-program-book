/*
* program accept date from user and print it
*
*
* created by Ahmed_Elkhodary
*/


#include <stdio.h>


int main(void)
{   
    int mm, dd, yyyy; 
	printf("Enter a date (mm/dd/yyyy) : ");
	scanf("%d/%d/%d", &mm, &dd, &yyyy);
	
	printf("You entered the date %d/%.2d/%.2d",yyyy,mm,dd);
	
	scanf("%d");
	return 0;
}
