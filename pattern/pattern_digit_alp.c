#include<stdio.h>
void main()
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(i%2==0)
				printf(" %d",1+j);
			else
				printf(" %c",'a'+j);
		}
		printf("\n");
	}
}
