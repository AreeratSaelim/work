#include <stdio.h>
int main()
{
	int no,age,fac,acc=0,ba=0,en=0,sc=0,cs=0,it=0,se=0;
	char fname[30],lname[3],sex,dept,con;
	con = 'c';//start
	while(toupper(con) != 'E')//test
	{
		//all statements here
		no++;
		printf("Student #%d\n",no);
		printf("Enter Name-Surname: ");
		scanf("%s %s",&fname,lname);
		printf("Enter Age: ");
		scanf("%d",&age);
		printf("Enter Sex(M/F): ");
		scanf(" %c",&sex);
		printf("Enter the faculty(1-4): ");
		scanf("%d",&fac);
		if(fac == 1)
		{
			acc++;
		}
		else if (fac == 2)
		{
			ba++;
		}
		else if (fac == 3)
		{
			en++;
		}
		else if (fac == 4)
		{
			printf("Enter the department (C,I,S): ");
			scanf(" %c",&dept);
			if(toupper(dept) == 'C')
			{
				cs++;
			}
			else if(toupper(dept) == 'I')
			{
				it++;
			}
			else if(toupper(dept) == 'S')
			{
				se++;
			}
			se++;
		}
		
		//action
		printf("Press (e)=exit, (c)=continue: ");
		scanf(" %c",&con);
	}
	printf("============================================================= \n");
	printf("         Summary Numbers of students are in faculties         \n");
	printf("============================================================= \n");
	printf("          Faculty name            Total Amount                \n");
	printf("          ============            ============                \n");
	printf("              Accounting %d\n",acc);
	printf("              Business Administration %d\n",ba);
	printf("              Engineering %d\n",en);
	printf("              Science and Technology %d\n",sc);
	printf("                    Computer Science = %d\n",cs);
	printf("                    Information Technology = %d\n",it);
	printf("                    Software Engineering = %d\n",se);
	printf("\n");
	printf("============================================================= \n");
	printf("                  Total of new students: %d\n",no);
	printf("============================================================= \n");
	return(0);
	
}
