//WAP to scan int num and bit pos from user then display menu for:set bit,clear bit,complement bit take users choice
//Based on users choice perform any one task and display o/p accordingly
#include<stdio.h>
void main()
{
	int num,pos,op;
	printf("Enter int number:");
	scanf("%d",&num);
	printf("Enter bit position:");
	scanf("%d",&pos);
	if(pos<=31)
	{
		printf("Enter your choice\n");
		printf("Press 1 for set bit\n");
		printf("Press 2 for clear bit\n");
		printf("Press 3 for complement bit\n");
		scanf("%d",&op);
		if(op==1)
		{
			num=num|1<<pos;
			printf("%d\n",num);
		}
		else if(op==2)
		{
			num=num&~(1<<pos);
			printf("%d\n",num);
		}
		else if(op==3)
		{
			num=num^1<<pos;
			printf("%d\n",num);
		}
		else 
			printf("Unknown option\n");
	}
	else
		printf("Wrong bit position\n");
}
