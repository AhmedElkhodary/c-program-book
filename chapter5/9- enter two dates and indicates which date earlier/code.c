/*
* program that ask User to enter two dates and indicates which date earlier
*
* created Ahmed_Elkhodary 
*/


#include<stdio.h>


int main(void)
{
	int mm1, dd1, yy1, mm2, dd2, yy2, days1, days2;
	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &mm1, &dd1, &yy1);
	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &mm2, &dd2, &yy2);
      
    days1 = (dd1) +(mm1*30) +(yy1*12*30);
    days2 = (dd2) +(mm2*30) +(yy2*12*30);
	 
	if (days1<days2){
	    printf("\n%d/%d/%d is earlier than %d/%d/%d",mm1, dd1, yy1, mm2, dd2, yy2);	
	} 
	else{
		printf("\n%d/%d/%d is earlier than %d/%d/%d",mm2, dd2, yy2, mm1, dd1, yy1);	
	} 
	 
    
	scanf("%d");
	return 0; 
}
