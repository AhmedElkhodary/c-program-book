/*
*   input speed of wind then display corresponding description
*
*  created by Ahmed_Elkhodary
*/


#include <stdio.h>


int main(void)
{
	int speed;
	printf("Speed(knots)\t Description\n");
	printf("Less than 1 \t Calm\n"     );
	printf("1-3         \t Light air\n");
	printf("4-27        \t Breeze\n"   );
	printf("28-47       \t Gale\n"     );
	printf("48-63       \t storm\n"    );
	printf("Above 63    \t Hurricane\n");
	
	printf("\nEnter the speed: ");
	scanf("%d",&speed);
	
	if      (speed <  1 ) printf("Calm");
	else if (speed <= 3 ) printf("Light air");
	else if (speed <= 27) printf("Breeze ");
	else if (speed <= 47) printf("Gale");
	else if (speed <= 63) printf("storm");
	else                  printf("Hurricane");
	
	
	scanf("%d");
	return 0;
	
}
