//WAP to print pattern and with generic based program
#include<stdio.h>
void main()
{
	int i,j,k,row;
	printf("Enter number of rows:");
	scanf("%d",&row);
	for(i=0;i<row;i++)
	{
		for(j=0;j<row-1-i;j++)
		printf(" ");
		for(k=0;k<=i;k++)
			printf(" *");
		printf("\n");
	}
}
