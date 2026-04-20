//WAP to print words of digits from user input
#include<stdio.h>
void main()
{
	int num,rev,r,i,c=0;
	printf("Enter int number:");
	scanf("%d",&num);
	for(rev=0;num;num=num/10)
	{
		r=num%10;
		rev=rev*10+r;
		c++;
		if(c==1)
			if(r==0)
				i=r;
	}
	for(num=rev;num;num=num/10)
	{
		r=num%10;
		if(r==1)
			printf("One ");
		else if(r==2)
			printf("Two ");
		else if(r==3)
			printf("Three ");
		else if(r==4)
			printf("Four ");
		else if(r==5)
			printf("Five ");
		else if(r==6)
			printf("Six ");
		else if(r==7)
			printf("Seven ");
		else if(r==8)
			printf("Eight ");
		else if(r==9)
			printf("Nine ");
		else 
			printf("Zero ");
	}
	if(i==0)
		printf("Zero ");	
	printf("\n");
}
