/*
*  program that ask Use to enter numerical grade and print letter grade
*
*  created by Ahmed_Elkhodary
*/

#include<stdio.h>

int main(void)
{
	int grade;
	printf("Enter numerical grade(0-100): ");
	scanf ("%d",&grade);
	
	
	switch (grade/10){
		case 10:   
		case 9 :   
		    printf("Letter grade A");
			break;  
		case 8 :   
		    printf("Letter grade C");
		    break;
		case 7 :   
		    printf("Letter grade C");
		    break;
		case 6 :   
		    printf("Letter grade D");
			break; 
		case 5 :   
		case 4 :
		case 3 : 
		case 2 : 
		case 1 : 
		case 0 :  
		   printf("Letter grade F"); 
		   break;
		default :        				   
	       printf("illegal"); 
	}
	
	
	scanf("%d");
	return 0 ;
}
