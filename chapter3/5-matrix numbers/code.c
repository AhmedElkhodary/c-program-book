/*
* matrix numbers
*
* created by Ahmed_Elkhodary
*/



#include<stdio.h>

int main(void)
{
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16;  
	int row1_sums,row2_sums,row3_sums,row4_sums;
	printf("Enter the number from 1 to 16 in any order:\n");
	scanf("%d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d",
	      &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15, &n16);
	
	printf("\n\n%d   %d   %d   %d \n%d   %d    %d    %d \n%d   %d   %d  % d \n%d   %d   %d   %d ",
	        n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16); 
	
	row1_sums = n1 + n2 + n3 + n4;
	row2_sums = n5 + n6 + n7 + n8;
	row3_sums = n9 + n10 + n11 + n12;
	row4_sums = n13 + n14 + n15 + n16;
	printf("\n\nRow sums: %d  %d  %d  %d", row1_sums, row2_sums, row3_sums, row4_sums);		
	
	scanf("%d");
	return 0; 		    
}
