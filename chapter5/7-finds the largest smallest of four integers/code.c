/*
*  progream finds the largest and smallest of four integers
*
*  created by Ahmed_Elkhodary
*/

#include <stdio.h>


int main(void)
{
    int n1, n2 ,n3, n4, largest, smallest;
	printf("Enter Four numbers: ");
	scanf("%d %d %d %d", &n1, &n2 , &n3, &n4);	
	
   /*	
   largest= ((n1>n2? n1:n2 ) > (n3>n4? n3:n4))? (n1>n2? n1:n2 ):(n3>n4? n3:n4);
   smallest=((n1<n2? n1:n2 ) < (n3<n4? n3:n4))? (n1<n2? n1:n2 ):(n3<n4? n3:n4);
   */
    	
	
	/*
	largest = smallest = n1;
	if(n2 > largest)  largest = n2;
 	if(n3 > largest)  largest = n3;
 	if(n4 > largest)  largest = n4;
	 
	if(n2 < smallest)  smallest = n2;
 	if(n3 < smallest)  smallest = n3;
 	if(n4 < smallest)  smallest = n4;
    */	    
	
	largest = smallest = n1;
    if(n2 > largest )   largest  = n2;
    else                smallest = n2; 
	if(n3 > largest )   largest  = n3;
    else                smallest = n3; 
    if(n4 > largest )   largest  = n4;
    else                smallest = n4;
	
	
	printf("\nLargest= %d", largest);
	printf("\nSmallest= %d",smallest);
	
	scanf("%d");
	return 0;
}
