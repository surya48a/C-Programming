#include<stdio.h>
void main()
{
	int num,pos,r,c;
	printf("Enter any number:");
	scanf("%d",&num);
l:
	r=num%10;
	num=num/10;
	c=0;
b:
	pos=7-c;
	printf("%d",r>>pos&1);
	c++;
	if(c<8)
		goto b;
	printf("\n");
	if(num)
		goto l;
}
