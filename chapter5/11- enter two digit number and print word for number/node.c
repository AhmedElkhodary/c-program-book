/*
*   program that ask Use to enter two digit number and print word for number
*
*   create Ahmed_Elkhodary
*/

#include<stdio.h>

int main(void)
{
	int num, b = 0, s = 0;
	char ch ; 
	printf("Enter a two digit number : ");
	scanf("%d",&num);
	
	if (num <10 || num >99 )
	    printf("out of scope");

	if(num > 19 && num < 100 ){
      b = num / 10;
	  s = num % 10;
    }
	
	
	switch (num){
		case 10: printf("ten"       ); break;
		case 11: printf("eleven"    ); break;
	    case 12: printf("twelve"    ); break;
	    case 13: printf("thirteen"  ); break;
	    case 14: printf("fourteen"  ); break;
	    case 15: printf("fifteen"   ); break;
	    case 16: printf("sixteen"   ); break;
	    case 17: printf("seventeen" ); break;
	    case 18: printf("eighteen"  ); break;
	    case 19: printf("ninteen"   ); break;
	} 	
		
	switch (b){
		case 2: printf("twenty"  ); break;
		case 3: printf("therty" ); break;
	    case 4: printf("fourty" ); break;
	    case 5: printf("fivty"  ); break;
	    case 6: printf("sixty"  ); break;
	    case 7: printf("seventy"); break;
	    case 8: printf("eighty" ); break;
	    case 9: printf("ninty"  ); break;
	} 
	
	switch (s){
		case 1: printf ("-one"  ); break;
		case 2: printf("-two"  ); break;
		case 3: printf("-there"); break;
	    case 4: printf("-four" ); break;
	    case 5: printf("-five" ); break;
	    case 6: printf("-six"  ); break;
	    case 7: printf("-seven"); break;
	    case 8: printf("-eight"); break;
	    case 9: printf("-nine" ); break;
	} 	

	
	scanf("%d");
	return 0;
}
