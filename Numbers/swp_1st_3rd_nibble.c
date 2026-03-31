#include<stdio.h>
void main()
{
	int num,pos,i,j;
	printf("Enter any number:");
	scanf("%d",&num);
	printf("Before swapping: %d\n",num);
	for(pos=31;pos>=0;pos--)
	{
		printf("%d",num>>pos&1);
		if(pos%4==0)
			printf(" ");
	}
	for(i=0,j=8;i<4;i++,j++)
		if((num>>i&1) != (num>>j&1))
		{
			num=num^1<<i;
			num=num^1<<j;
		}
	printf("\nAfter swapping: %d\n",num);
	for(pos=31;pos>=0;pos--)
	{
		printf("%d",num>>pos&1);
		if(pos%4==0)
			printf(" ");
	}
	printf("\n");
}
