#include <stdio.h>
int main()
{
	int num=0,i=0;
	printf("Initial value is: ");
	scanf("%d",&num);
	while(num>1)
	{
		if(num%2==0)
		{
			num=num/2;
			i++;
			printf("Next value is: %d\n",num);
		}
		else if(num%2==1)
		{
			num=num*3;
			num++;
			i++;
			printf("Next value is: %d\n",num);
		}
	}
	if(num<=0)
	{
		printf("Error\n");
	}
	else
	{
		printf("Final value 1, number of steps: %d\n",i);
	}
	return(0);
}
