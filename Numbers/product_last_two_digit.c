#include<stdio.h>
void main()
{
int n,n1,n2;
printf("Enter any number:");
scanf("%d",&n);
n=n%100;
n1=n%10;
n2=n/10;
printf("%d\n",n1*n2);

}
