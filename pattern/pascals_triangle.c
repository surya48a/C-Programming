#include<stdio.h>
void main()
{
	int i,j,k,c,row;
	printf("Enter number of rows:");
	scanf("%d",&row);
	for(i=0;i<row;i++)
	{
		for(j=0;j<row-i;j++)
			printf(" ");
		for(k=0;k<=i;k++)
			if(k==0)
			{
				c=1;
				printf("%d ",c);
			}
			else
			{
				c=c*(i-k+1)/k;
				printf("%d ",c);
			}
		printf("\n");
	}
}
