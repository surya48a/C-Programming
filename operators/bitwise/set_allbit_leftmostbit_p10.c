#include<stdio.h>
void main()
{
	int num,pos,c,k;
	printf("Enter any number:");
	scanf("%d",&num);
	for(pos=31;pos>=0;pos--)
	{
		printf("%d",num>>pos&1);
		if(pos%8==0)
			printf(" ");
	}
	printf("\n");
	for(c=0,pos=0;pos<32;pos++)
	{
		c++;
		if(num>>pos&1)
			break;
	}
	num=num<<(32-c);
	num=num>>(32-c);
	for(pos=31;pos>=0;pos--)
	{
		printf("%d",num>>pos&1);
		if(pos%8==0)
			printf(" ");
	}
	printf("\nnum=%d\n",num);
}

