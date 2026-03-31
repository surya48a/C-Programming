#include<stdio.h>
void main()
{
	int r,r1,c,c1,num,temp,sum;
	printf("Enter any int number:");
	scanf("%d",&num);
	for(temp=num,c=0;temp;temp=temp/10,++c);
	for(temp=num,sum=0,c1=c;temp;temp=temp/10,c=c1)
	{
		r=temp%10;
		for(r1=1;c>0;--c)
			r1=r1*r;
		sum=sum+r1;
	}
	if(num==sum)
		printf("It is armstrong number\n");
	else
		printf("It is not armstrong number\n");
} 
