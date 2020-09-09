#include <stdio.h>
int main()
{
	int startt,endd,num=0,i,j;
	printf("Enter start number of multiplication: ");
	scanf("%d",&startt);
	printf("Enter end number of multiplication: ");
	scanf("%d",&endd);
	printf("\n\n");
	for(i=startt;i<=endd;i++)
	{
		for(j=1;j<=12;j++)
		{
			num = i*j;
			printf("%d\t",num);
		}
		printf("\n\n");
	}
	return(0);	
}
