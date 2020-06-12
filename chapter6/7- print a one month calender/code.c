/*
*  program print a one month calender
*
* created by Ahmed_Elkhodary
*/


#include <stdio.h>


main()
{
	int day_of_month, starting_day ;
	printf("Enter number of days in month: ");
	scanf("%d", &day_of_month);
	printf("Enter starting day of the week (1=sun, 7=sat): ");
	scanf("%d", &starting_day);
	
	/*
	int j = starting_day - (starting_day * 2 -2);
	

	int i = 1;    
		for( j ,  i ; j <= day_of_month; j++, i++){
	    	
			if( j < 1) printf("   ");
			else       printf("%2d ",j);
	    	if( i % 7 == 0) printf("\n");
		}
	*/     
	int i;
	for(i = 1; i < day_of_month+starting_day; i++){
	    if (starting_day- i >= 1)
	          printf("   ");
	    
		else  printf("%2d ",i-(starting_day-1));
		if( i % 7 == 0) printf("\n");  
	}


	scanf("%d");
}
