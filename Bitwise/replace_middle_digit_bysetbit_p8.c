#include<stdio.h>
void main()
{
	int num,pos,n=0,c=0,rev,r,s=0;
	printf("Enter any number:");
	scanf("%d",&num);
	for(rev=0;num;num=num/10)
	{
		r=num%10;
		n++;
		rev=rev*10+r;
	}
	n=n/2+1;
	num=rev;
	for(rev=0;num;num=num/10)
	{
		r=num%10;
		s++;
		if(s==n)
		{
			for(pos=3;pos>=0;pos--)
				if(r>>pos&1)
					c++;
			rev=rev*10+c;
		}
		else
			rev=rev*10+r;
	}
	printf("%d\n",rev);
}

