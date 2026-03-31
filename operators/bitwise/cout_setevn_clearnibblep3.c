#include<stdio.h>
void main()
{
	unsigned int num,k=0,c;
	int pos;
	printf("Enter any number:");
	scanf("%d",&num);
	for(pos=31;pos>=0;pos--)
	{
		printf("%d",num>>pos&1);
		if(pos%8==0)
			printf(" ");
	}
	printf("\n");
l:
	for(c=0,pos=7;pos>=0;pos--)
		if(num>>pos&1)
			c++;
	if(c%2==0)
		num=num&0xfffffff0;
	num=(num>>8)|(num<<24);
	k++;
	if(k<4)
		goto l;
	for(pos=31;pos>=0;pos--)
	{
		printf("%d",num>>pos&1);
		if(pos%8==0)
			printf(" ");
	}
	printf("\n");
}
