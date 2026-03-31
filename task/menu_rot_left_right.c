//WAP to rotate right and left .Take input from user
#include<stdio.h>
void main()
{
	int num,m,n,pos,no_rot,op;
	printf("Enter int number:");
	scanf("%d",&num);
	printf("Enter number of rotation:");
	scanf("%d",&no_rot);
	printf("Press 1 for right rotation \nPress 2 for left rotation\n");
	scanf("%d",&op);
	printf("Before rotation: ");
	for(pos=31;pos>=0;pos--)
		printf("%d",num>>pos&1);
	printf("\nnum=%d\n",num);
	if(op==1)
	{
		m=num>>no_rot;
		n=num<<(32-no_rot);
		num=m|n;
	}
	else if(op==2)
	{
		m=num<<no_rot;
		n=num>>(32-no_rot);
		num=m|n;
	}
	printf("After rotation:  ");
	for(pos=31;pos>=0;pos--)
		printf("%d",num>>pos&1);
	printf("\nnum=%d\n",num);
}
