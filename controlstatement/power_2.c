//WAP to print power of 2 within 10 using loop
#include<stdio.h>
void main()
{
	int num;
	for(num=1;num<=10;num++)
		if(!(num&num-1))
			printf("%d ",num);
	printf("\n");
}
