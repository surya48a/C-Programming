#include<stdio.h>
void main()
{
	int i,j,num,row,b;
	printf("Enter the prime number range:");
	scanf("%d",&num);
	printf("Enter the number of rows:");
	scanf("%d",&row);
	for(i=0;i<row;i++)
	{
		for(j=0,num;j<=i;num++)
		{
			for(b=2;b<num;b++)
				if(num%b==0)
					break;
			if(b==num)
			{
				printf("%d ",num);
				j++;
			}
		}
		printf("\n");
	}
}
