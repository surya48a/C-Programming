//WAP to display result of student based on marks using nested if
#include<stdio.h>
void main()
{
	int m;
	printf("Enter your marks:");
	scanf("%d",&m);
	if(m>=35)
	{
		if(m>=50)
		{
			if(m>=69)
			{
				if(m>=70 && m<=100)


					printf("A\n");

				else
					printf("Wrong marks\n");
			}
			else 
				printf("B\n");
		}
		else
			printf("C\n");
	}
	else
		printf("Fail\n");
}
