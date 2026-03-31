//WAP to print the cube of middle number
#include<stdio.h>
void main()
{
	int num,rev,r,c=0,i,j;
	printf("Enter int number:");
	scanf("%d",&num);
	for(rev=0;num;num=num/10)
	{
		r=num%10;
		rev=rev*10+r;
		c++;
		if(c==1)
			i=c;
		j=c;
	}
	for(num=rev,c=0;num;num=num/10)
	{
		r=num%10;
		c++;
		if(c>i && c<j)
			printf("%d",r*r*r);
		else
			printf("%d",r);
	}
	printf("\n");
}
