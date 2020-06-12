/*
* program to check book balancing
*
* created by Ahmed_Elkhodary 
*/


#include<stdio.h>

int main(void)
{
	printf("***ACME checkbook-balancing program ***\n");
	printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n\n");
	/*---------------------------------------------*/
	
	int acm;
	float balance = 0, creadit, debit;
	while(1){
		printf("Enter command: ");
		scanf("%d",&acm);
		
		switch(acm){
			case 0 :
				balance = 0;
				break;
			case 1 : 
			    printf("Enter amount of creadit: ");
			    scanf("%f", &creadit);
			    balance += creadit; 
			    break;
			case 2 : 
			    printf("Enter amount of debit: ");
			    scanf("%f", &creadit);
			    balance -= creadit;
			    break;	
			case 3 : 
			    printf("Current balance $%.2f\n",balance);
			    break;	
			case 4 : 
                return 0;
			default:
	            printf("\nCommands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n\n");			 		
		} 			
	}
}

