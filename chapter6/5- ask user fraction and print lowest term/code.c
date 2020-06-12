/*
*  program ask user fraction and print lowest term
*
* created by Ahmed_Elkhodary
*/


#include <stdio.h>


main()
{
	int m, n, num1, num2, remainder;
	printf("Enter a fraction ( / ): ");
	scanf("%d/%d", &num1, &num2);
	m = num1;
	n = num2;
	while( n != 0){
		remainder = m % n;
		m = n;
		n = remainder;
	}
	 
	printf("In lowest terms: %d/%d", num1 / m, num2 / m);
	scanf("%d");
}
