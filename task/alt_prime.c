//WAP to print alternate prime number upto 20
#include<stdio.h>
void main()
{
	int num,c=0,i;
	for(num=1;num<=20;num++)
	{
		for(i=2;i<num;i++)
		{
			if(num%i==0)
				break;
		}
		if(num==i)
		{	
			c++;
			if(c%2)
				printf("%d ",num);
		}
	}
	printf("\n");
}
