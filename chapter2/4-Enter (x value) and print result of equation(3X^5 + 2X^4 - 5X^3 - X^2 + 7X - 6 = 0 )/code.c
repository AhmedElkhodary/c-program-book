/*
* Enter x and print result of equation   3X^5 + 2X^4 - 5X^3 - X^2 + 7X - 6 = 0 
*
* created by Ahmed_Elkhodary
*/



#include <stdio.h>
int main(void)
{
	int x ,total;
	printf("ENTER THE NUMBER: ");
	scanf("%d",&x);
	
	total = (  (3*(x*x*x*x*x)) +  (2*(x*x*x*x)) -  (5*(x*x*x))  -  (1*(x*x))  +  (7*(x))- (6));
	printf("RESULT= %d",total);
	
	scanf("%d");
	return 0;
	 
}
