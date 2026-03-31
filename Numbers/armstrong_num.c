#include<stdio.h>
void main()
{
	int i,j,r,r1,c,c1,num,sum,add;
	printf("Enter starting range:");
	scanf("%d",&i);
	printf("Enter ending range:");
	scanf("%d",&j);
	for(add=0,c1=0;i<=j;i++)
	{
		for(c=0,num=i;num;num=num/10,c++);
		for(num=i,sum=0;num;num=num/10)
		{
			r=num%10;
			for(r1=1;c>0;c--)
				r1=r1*r;
			sum=sum+r1;
		}
		if(i==sum)
		{
			c1++;
			add+=i;
			printf("%d ",i);
		}
	}
	printf("\nsum=%d count=%d\n",add,c1);
}

