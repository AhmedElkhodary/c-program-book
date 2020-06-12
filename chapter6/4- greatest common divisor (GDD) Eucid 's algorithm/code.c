/*
*  program calculate greatest common divisor (GDD) Eucid 's algorithm
*
* created by Ahmed_Elkhodary
*/

#include <stdio.h>


main()
{
	int m, n, remainder;
	printf("Enter two number: ");
	scanf("%d%d", &m, &n);
	
	while( n != 0){
		remainder = m % n;
		m = n;
		n = remainder;
	}
	
	printf("Greatest common divisor = %d", m );
	scanf("%d");
}
