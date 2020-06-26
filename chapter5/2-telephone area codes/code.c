/*
*  program that provides telephone area codes
*
* created by Ahmed_Elkhodary
*/

#include <stdio.h>


int main(void)
{
	int code;
	printf("Area code\t Majar City\n");
	printf("   229   \t Albany    \n");
	printf("   404   \t Atlanta   \n");
	printf("   470   \t Atlanta   \n");
	printf("   478   \t Macon     \n");
	printf("   678   \t Atlanta   \n");	
	printf("   706   \t Columbus  \n");
	printf("   762   \t Columbus  \n");	
	printf("   770   \t Atlanta   \n");	
	printf("   912   \t Savannah  \n");	
	
	printf("\nPlease Enter The code area: ");
	scanf("%d", &code);
	
	switch (code){
		case 229:  printf("Albany")  ; break;
		case 404:  printf("Atlanta") ; break;
		case 470:  printf("Atlanta") ; break;
		case 478:  printf("Macon")   ; break;
		case 678:  printf("Atlanta") ; break;
		case 706:  printf("Columbus"); break;
		case 762:  printf("Columbus"); break;
		case 770:  printf("Atlanta") ; break;	
		case 912:  printf("Savannah"); break;
		default :  printf("Aera code not recognized"); 				
	}
		
		
	scanf("%d");
	return 0;	
}
