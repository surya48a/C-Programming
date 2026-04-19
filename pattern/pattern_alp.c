#include<stdio.h>
void main()
{
	int i,j;
	char ch;
	for(i=0;i<5;i++)
	{
		for(j=0,ch=97;j<5-i;j++)
			printf(" %c",ch+j);
		printf("\n");
	}
}
