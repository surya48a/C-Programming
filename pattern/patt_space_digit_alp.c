#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=0;i<5;i++)
	{
		for(j=0;j<4-i;j++)
			printf(" ");
		for(k=0;k<=i;k++)
		{
			if(i%2==0)
				printf("%d",1+k);
			else
				printf("%c",'a'+k);
		}
		printf("\n");
	}
}
