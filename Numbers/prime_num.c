#include<stdio.h>
void main()
{
	int i,num,c,c1;
	for(c=0,num=2;c!=2;num++)
	{
		for(i=2;i<num;i++)
			if(num%i==0)
				break;
		if(num==i)
		{
			c1++;
			if(c1==5 || c1==7)
			{
				printf("%d ",num);
				c++;
			}
		}
	}
	printf("\n");
}
