/*
* compute the volume of sphere
*
* created by Ahmed_Elkhodary
*/

#include <stdio.h>
#define PI 3.18
#define CON (4.0f / 3.0f)
 
int main(void)
{
	float r ;
	printf("ENTER the radius: ");
	scanf("%f",&r);
	printf("VOLUME = %.3f",CON * PI *(r*r*r));
	
	scanf("%f");
	return 0;

}
