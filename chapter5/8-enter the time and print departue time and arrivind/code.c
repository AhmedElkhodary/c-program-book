/*
* enter the time and print departue time and arrivind
* 
* created Ahmed_Elkhodary
*/

#include<stdio.h>


int main(void)
{
	printf("Departure time     Arrival time\n");
	printf("  8:00 AM           10:16 AM   \n");
	printf("  9:43 AM           11:52 AM   \n");
	printf(" 11:19 AM            1:31 PM   \n");
	printf(" 12:47 PM            3:00 PM   \n");
	printf("  2:00 PM            4:08 PM   \n");
	printf("  3:45 PM            5:55 PM   \n");		
	printf("  7:00 PM            9:20 PM   \n");
	printf("  9:45 PM           11:58 PM   \n");	
	/*------------------------------------------*/
	
	int hours, minutes, min, r1, r2, r3, r4, r5, r6, r7, r8 ;
	printf("\n\n Enter a 24-hour time(Hour: Minute): ");
	scanf("%d:%d",&hours,&minutes);
	
	min = hours * 60 + minutes;
	if     (min >= (21*60+45))   printf("\nClosest departure time is 09:45 PM, arriving at 11:58 PM"); 
	else if(min >= (19*60+00))   printf("\nClosest departure time is 07:00 PM, arriving at 09:20 PM"); 
	else if(min >= (15*60+45))   printf("\nClosest departure time is 03:45 PM, arriving at 05:55 PM");
	else if(min >= (14*60+00))   printf("\nClosest departure time is 02:00 PM, arriving at 04:08 PM"); 
	else if(min >= (12*60+47))   printf("\nClosest departure time is 12:47 PM, arriving at 03:00 PM");	
	else if(min >= (11*60+19))   printf("\nClosest departure time is 11:19 AM, arriving at 01:31 PM"); 
	else if(min >= (9*60+43 ))   printf("\nClosest departure time is 09:45 AM, arriving at 11:52 AM");	
	else if(min >= (8*60+00 ))   printf("\nClosest departure time is 08:00 AM, arriving at 10:16 AM");
	else{
	                         
	    printf("\n The last departure time is 09:45 PM   and first departure time is 08:00 AM ");
	    printf("\n departure time is 09:45 PM, arriving at 11:58 PM"); 
	    printf("\n departure time is 08:00 AM, arriving at 10:16 AM");
    
	}  
	scanf("%d");
	return 0;
}
