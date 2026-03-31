#include<stdio.h>
void main()
{
	int num,r,r1,rev,temp;
	printf("Enter any number:");
	scanf("%d",&num);
	for(r1=0,temp=num;temp;temp=temp/10)
	{
		r=temp%10;
		if(r>r1)
			r1=r;
	}
	for(rev=0,temp=num;temp;temp=temp/10)
	{
		r=temp%10;
		if(r<r1)
			rev=rev*10+r;
	}
	num=rev;
	rev=0;
l:
	r=num%10;
	num=num/10;
	rev=rev*10+r;
	if(num)
		goto l;
	printf("%d\n",rev);
}
