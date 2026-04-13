#include<stdio.h>
void main()
{
	int num,r,pos,r1,i,rev=0,c=0,temp;
	printf("Enter any number:");
	scanf("%d",&num);
	for(temp=num;temp;temp=temp/10,c=0)
	{
		r=temp%10;
		for(pos=3;pos>=0;pos--)
			if(r>>pos&1)
				c++;	
		for(i=2;i<c;i++)
			if(c%i==0)
				break;
		if(c==i)
			break;
	}
	for(rev=0,r1=r;num;num=num/10)
	{
		r=num%10;
		if(r!=r1)
			rev=rev*10+r;
	}
	for(num=rev,rev=0;num;num=num/10)
	{
		r=num%10;
		rev=rev*10+r;
	}
	printf("%d\n",rev);
}
