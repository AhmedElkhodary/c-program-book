/*
* program print a table of squares
*
*
* created by Ahmed_Elkhodary
*/

#include<stdio.h>


int main(void)
{
	int i = 1, num;
	printf("Enter number of entries in table: ");
	scanf("%d",&num);
	
	while(i <= num){
		
		printf("\t%d\t%d\n",i,i*i);
		i++;
	}
	
	scanf("%d");
	return 0;
}
