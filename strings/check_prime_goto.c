#include<stdio.h>
int prime_rec_fun(int);
int str_len_goto(char *);
void main()
{
	char s[50];
	printf("Enter a string:");
	scanf("%[^\n]",s);
	int len;
	len=str_len_goto(s);
	if(prime_rec_fun(len))
		printf("Yes %d is prime number\n",len);
	else
		printf("Not prime number\n");
}
int str_len_goto(char *s)
{
	int len=0;
l:
	len++;
	if(s[len])
		goto l;
	return len;
}
int prime_rec_fun(int len)
{
	static int i=2;
	if(i<len)
	{
		if(len%i==0)
			return 0;
		i++;
		return prime_rec_fun(len);
	}
else
	return 1;
}
