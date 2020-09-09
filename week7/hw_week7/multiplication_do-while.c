#include <stdio.h>
int main()
{
	int startt,endd,num=0,i,j;
	printf("Enter start number of multiplication: ");
	scanf("%d",&startt);
	printf("Enter end number of multiplication: ");
	scanf("%d",&endd);
	printf("\n\n");
	i=startt;
	do
	{
		j=1;
		do
		{
			num = i*j;
			printf("%d\t",num);
			i++;j++;
		}while(j<=12);
		printf("\n\n");
		
	}while(i<=endd);	
	return(0);	
}
