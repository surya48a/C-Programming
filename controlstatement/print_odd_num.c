//WAP to print only odd number within 10 using for loop
#include<stdio.h>
void main()
{
	int num;
	for(num=1;num<=10;num++)
		if(num%2)
			printf("%d ",num);
	printf("\n");
}

