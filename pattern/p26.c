#include<stdio.h>
void main()
{
	int i,j,k,c1,row,c=1,l=0,c2;
	printf("Enter number of rows:");
	scanf("%d",&row);
	for(i=0;i<row;i++)
	{
		for(j=0;j<row-1-i;j++)
			printf(" ");
		for(c1=1,k=0;k<i*2+1;k++)
			if(k<c)
				printf(" %d",++l);
			else
			{
				printf(" %d",l-c1);
				c1++;
			}	
		c++;
if(i==1)
l--;
if(i>1)
l-=2;
		printf("\n");
	}
}
