/*
* program formats product information entered
*
* crated by Ahmed_Elkhodary
*/


#include <stdio.h>


int main(void)
{   
    int item_number, mm, dd, yyyy;
    float unit_price;
    
    printf("Enter item number: ");
    scanf("%d",&item_number);
    
    printf("Enter unit price: ");
    scanf("%f",&unit_price);
    
    printf("Enter purchase date  (mm/dd/yyyy): ");
    scanf("%d/%d/%d",&mm,&dd,&yyyy);
    
    printf("\n\nItem\tUnit Price\t  Purchase Date \n");
    printf("%d\t$ %.2f\t\t  %.2d/%.2d/%d", item_number, unit_price, mm, dd, yyyy);
    

	scanf("%d");
	return 0;
}
