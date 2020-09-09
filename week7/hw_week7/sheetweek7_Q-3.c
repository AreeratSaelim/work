#include <stdio.h>
int main()
{
	float dcnt,net = 0,NET = 0;
	int quan,price,qu = 0;
	char pcd,quit = 'N';
	while(toupper(quit) == 'N')
	{
		printf("Product code (A or B): ");
		scanf(" %c",&pcd);
		printf("Quantity: ");
		scanf("%d",&quan);
		if(pcd =='A'||pcd =='B'||pcd =='a'||pcd =='b')
		{
			if(toupper(pcd) == 'A')
			{
				price = 500;
			}
			else if(toupper(pcd) == 'B')
			{
				price = 250;
			}
			qu = qu + quan;
			printf("Buying %d Product %c(s) = %.2f\n",quan,pcd,(float)quan * (float)price);
		
			if(quan>9)
			{
				dcnt = 0.1 * (float)quan * (float)price;
			}
			else
			{
				dcnt = 0;
			}
			printf("Discount (10 percent) = %.2f\n",dcnt);
			net = (float)quan * (float)price - dcnt;
			printf("Net = %.2f baht(S)\n",net);
			NET = NET + net;
		}
		else
		{
			printf("Invalid software code!!!\n");
		}
		printf("#################################################################\n");
		printf("Quit (Y/N): ");
		scanf(" %c",&quit);
		printf("#################################################################\n");
	}
	printf("Total Quantity = %d\n",qu);
	printf("Total Price = %.2f baht\n",NET);
	return(0);
}
