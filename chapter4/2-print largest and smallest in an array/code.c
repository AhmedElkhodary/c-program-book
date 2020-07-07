/*
*  program that print largest and smallest number
*
*  created by Ahmed_Elkhodary
*/



# include <stdio.h>
# define N 5
void MAX_MIN( int a[], int n, int *max, int *min);

int main(void)
{
	int i, b[N], larg, small;
	printf("__________enter the 10 number______________\n\n");
	for( i = 0; i < N; i++){
		printf("enter %d number: ",i+1);
		scanf("%d", &b[i]);
	}
	
	
    MAX_MIN( b, N, &larg, &small);
	printf("LARGEST: %d\n",larg);	
	printf("SMALLEST: %d\n",small);	
	
	scanf("%d");
	return 0 ;
}

void MAX_MIN( int a[], int n, int *max, int *min)
{
	int i ;
	*max = *min = a[0];
	for( i = 1; i < n; i++){
		if( a[i] > *max)
		   *max = a[i];
		else if (a[i] < *min)
		   *min = a[i];  
	}
}


