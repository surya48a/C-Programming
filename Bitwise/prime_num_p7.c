#include<stdio.h>
void main()
{
	int num,n,i,c;
	printf("Enter any number:");
	scanf("%d",&num);
	printf("Enter Nth prime:");
	scanf("%d",&n);
	for(num++,c=0;num;num++)
	{
		for(i=2;i<num;i++)
			if(num%i==0)
				break;
		if(num==i)
			c++;
		if(c==n)
		{
			printf("%d\n",i);
			break;
		}
	}
}
