#include<stdio.h>
void main()
{
char ch,pos,num;
printf("Enter 1 byte int num:");
scanf("%hhd",&num);
pos=7;
printf("%hhd",num>>pos&1);
pos=pos-1;
printf("%hhd",num>>pos&1);
pos=pos-1;
printf("%hhd",num>>pos&1);
pos=pos-1;
printf("%hhd",num>>pos&1);
pos=pos-1;
printf("%hhd",num>>pos&1);
pos=pos-1;
printf("%hhd",num>>pos&1);
pos=pos-1;
printf("%hhd",num>>pos&1);
pos=pos-1;
printf("%hhd",num>>pos&1);
printf("\n");
}

