#include<stdio.h>
void main()
{
	int n,c=0;
	printf("Enter any number:");
	scanf("%d",&n);
l:
	if(n%2)
	{
		n=n/10;
		c++;
		goto l;
	}
	else
	{
		n=n/10;
		if(n)
			goto l;
	}
	printf("%d\n",c);
}
