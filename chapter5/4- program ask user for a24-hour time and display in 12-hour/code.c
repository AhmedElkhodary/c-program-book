/*
*   program ask user for a24-hour time and display in 12-hour
*
*   created by Ahmed_Elkhodary
*/

#include <stdio.h>


int main(void)
{   int hours, minutes;
	printf("Enter a24-hour time (Hour:Minutes): ");
	scanf("%d:%d", &hours, &minutes);
	
    if      (hours == 0 ) printf("12:%.2d AM", minutes);
    else if (hours < 12 ) printf("%.2d:%.2d AM", hours , minutes);
    else if (hours == 12) printf("%.2d:%.2d PM", hours, minutes);
    else                  printf("%.2d:%.2d PM", hours - 12, minutes);
   
	
	scanf("%d");
	return 0;
	
}

