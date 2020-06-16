/*
*   program to enter (x value) and print result of equation((((3x+2)x-1)x+7)x-6
*
* create by Ahmed_Elkhodary
*/


#include <stdio.h>
int main(void)
{
	int x ,total;
	printf("ENTER THE NUMBER: ");
	scanf("%d",&x);
	
	total = (((((3 * x) + 2) * (x - 1)) * (x + 7)) * (x - 6));
	printf("RESULT= %d",total);
	
	scanf("%d");
	return 0;
	 
}
