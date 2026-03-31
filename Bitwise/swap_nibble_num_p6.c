#include<stdio.h>
void main()
{
	unsigned int num;
	int pos;
	printf("Enter any number:");
	scanf("%u",&num);
	for(pos=31;pos>=0;pos--)
	{
		printf("%d",num>>pos&1);
		if(pos%8==0)
			printf(" ");
	}
	printf("\n");
	num=((num&0xf0f0f0f0)>>4) | ((num&0x0f0f0f0f)<<4);
	for(pos=31;pos>=0;pos--)
	{
		printf("%d",num>>pos&1);
		if(pos%8==0)
			printf(" ");
	}
	printf("\n");
}
