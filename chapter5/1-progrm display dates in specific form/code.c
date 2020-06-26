/*
* progrm display dates in specific form
*
* created by Ahmed_Elkhodary
*/

#include <stdio.h>
#include <stdbool.h>



int main(void)
{
	int mm, dd, yy;
	printf("Enter date (mm/dd/yy): ");
	scanf("%d/%d/%d",&mm, &dd, &yy);	
	
	printf("Dated this %d",dd);
	
	switch (dd){
		case 1: case 21: case 31:  printf("st ");  break;
        case 2: case 22:           printf("nd ");  break;		
        case 3: case 23:           printf("rd ");  break;
		default:                   printf("th ");			
	}
	printf("day of ");

	switch (mm){
		case 1:  printf("JAN");  break;
		case 2:  printf("FEB");  break;	
		case 3:  printf("MAR");  break;	
		case 4:  printf("APR");  break;
		case 5:  printf("MAY");  break;	
		case 6:  printf("JUN");  break;				
		case 7:  printf("JUL");  break;
		case 8:  printf("AUG");  break;	
		case 9:  printf("DEP");  break;	
		case 10: printf("OCT");  break;
		case 11: printf("NOV");  break;	
		case 12: printf("DEC");  break;											
	}
	printf(", 20%.2d.\n",yy);
	
	scanf("%d");
	return 0;

}

