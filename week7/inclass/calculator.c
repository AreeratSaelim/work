#include <stdio.h>
int main()
{
	float num1,num2,ans=0;
	char oper,con;
	con = 'y';//start of while
	while(toupper(con)!= 'N')//test of while
	{
		printf("Enter num1: ");
		scanf("%f",&num1);
		printf("Enter num2: ");
		scanf("%f",&num2);
		printf("Enter an operator(+,-,*,/): ");
		scanf(" %c",&oper);
		switch(oper)
		{
			case '+': ans = num1 + num2;
			printf("The result is %0.2f\n",ans);
			break;
			case '-': ans = num1 - num2;
			printf("The result is %0.2f\n",ans);
			break;
			case '*': ans = num1 * num2;
			printf("The result is %0.2f\n",ans);
			break;
			case '/': ans = num1 / num2;
			printf("The result is %0.2f\n",ans);
			break;
		}
		//statements for calculating 2 numbers
		//action of while
		printf("Continue?(Y/N): ");
		scanf(" %c",con);
	}
	printf("Goodbye");
	return 0;
}
