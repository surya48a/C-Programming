//WAP to printf 5th prime number only
#include<stdio.h>
void main()
{
	int num,i,c=0;
	for(num=1;num<=100;num++)
	{
		for(i=2;i<num;i++)
		{
			if(num%i==0)
				break;
		}
		if(num==i);
		{
			c++;
			if(c==5)
			{			
				printf("fifth prime num=%d\n",num);
				break;	
			}
		}
	}
}
