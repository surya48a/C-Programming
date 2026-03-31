#include<stdio.h>
void main()
{
	int i,j,k,r,r1,c,sum,num,add;
	printf("Enter starting range number:");
	scanf("%d",&i);
	printf("Enter ending range number:");
	scanf("%d",&j);
	for(add=0,c=0;i<=j;i++)
	{
		for(num=i,sum=0;num;num=num/10)
		{
			r=num%10;
			for(r1=1;r>=2;r--)
				r1=r1*r;
			sum=sum+r1;
		}
		if(sum==i)
		{
			c++;
			add+=sum;
			printf("%d ",sum);
		}
	}
	printf("\nsum=%d count=%d\n",add,c);
}
