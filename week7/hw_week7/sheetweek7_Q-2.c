#include <stdio.h>
int main()
{
	char ch;
	int vowel=0,letter=0,num=0;
	printf("Enter a character: ");
	scanf(" %c",&ch);
	while(ch!='.')
	{
		if(toupper(ch)=='A'||toupper(ch)=='E'||toupper(ch)=='I'||toupper(ch)=='O'||toupper(ch)=='U')
		{
			vowel++;
		}
		else if(toupper(ch)>='B'&&toupper(ch)<='Z')
		{
			letter++;
		}
		else if(ch>='0'||ch<='9')
		{
			num++;
		}
		printf("Enter a character: ");
		scanf(" %c",&ch);
	}
	printf("Vowel\t=%d\n",vowel);
	printf("Letter\t=%d\n",letter);
	printf("Number\t=%d\n",num);
	return(0);
}
