//WAP to print to count set bit and clear bit of user input number
#include<stdio.h>
void main()
{
	int num,k,c=0,c1=0,pos;
	printf("Enter int number:");
	scanf("%d",&num);
	for(pos=31;pos>=0;pos--)
	{
		printf("%d",k=num>>pos&1);
		if(k==1)
			c++;
		else
			c1++;
	}
	printf("\nSet bit count=%d\n",c);
	printf("Clear bit count=%d\n",c1);
}
