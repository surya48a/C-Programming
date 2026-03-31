//WAP to cube the alternate number from user input
#include<stdio.h>
void main()
{
	int num,r,rev,c;
	printf("Enter int number:");
	scanf("%d",&num);
	for(rev=0;num;num=num/10)
	{
		r=num%10;
		rev=rev*10+r;
	}
	for(num=rev,c=0;num;num=num/10)
	{
		r=num%10;
		c++;
		if(!(c%2))
		{
			r=r*r*r;
			printf("%d",r);
		}
		else
			printf("%d",r);
	}
	printf("\n");
}
