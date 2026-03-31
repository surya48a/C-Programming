#include<stdio.h>
void main()
{
	int num,r;
	printf("Enter any number:");
	scanf("%d",&num);
l:
	r=num%10;
	num=num/10;
	if(num)
		goto l;
	if(r%2)
		printf("It is odd number\n");
	else
		printf("It is even number\n");
}

/*using for loop

int num,r;
for( ;num;num=num/10)
r=num%10;
	if(r%2)
		printf("It is odd number\n");
	else
		printf("It is even number\n");*/

