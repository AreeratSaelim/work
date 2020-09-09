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
	while(i<=endd)
	{
		j=1;
		while(j<=12)
		{
			num = i*j;
			printf("%d\t",num);
			j++;
		}
			printf("\n\n");
			i++;
	}
	return(0);	
}
