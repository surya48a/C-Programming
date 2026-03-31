#include<stdio.h>
void main()
{
	int num,temp,pos,i,j;
	printf("Enter any number in hexadecimal:");
	scanf("%x",&num);
	for(pos=31;pos>=0;pos--)
	{
		printf("%d",num>>pos&1);
		if(pos%8==0)
			printf(" ");
	}
	printf("\nnum=%d\n",num);
	for(temp=num,i=0,j=31;i<j;i++,j--)
		if((temp>>i&1) != (temp>>j&1))
		{
			temp=temp^1<<i;
			temp=temp^1<<j;
		}
	for(pos=31;pos>=0;pos--)
	{
		printf("%d",temp>>pos&1);
		if(pos%8==0)
			printf(" ");
	}
	printf("\nnum=%d\n",temp);
	if(num==temp)
		printf("This bit representation is palindrome\n");
	else
		printf("This bit representation is not palindrome\n");
}
