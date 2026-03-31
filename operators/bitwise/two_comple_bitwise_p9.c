#include<stdio.h>
void main()
{
	int num,pos;
	printf("Enter any number:");
	scanf("%d",&num);
	for(pos=31;pos>=0;pos--)
	{
		printf("%d",num>>pos&1);
		if(pos%8==0)
			printf(" ");
	}
	printf("\n");
	num=(num-1)^0xffffffff;
	for(pos=31;pos>=0;pos--)
	{
		printf("%d",num>>pos&1);
		if(pos%8==0)
			printf(" ");
	}
	printf("\nnum=%d\n",num);
}
