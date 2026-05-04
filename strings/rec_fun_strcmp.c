#include<stdio.h>
int rec_strcmp(char *,char *);
void main()
{
	char s1[50],s2[50];
	printf("Enter s1 string:");
	scanf("%[^\n]",s1);
	printf("Enter s2 string:");
	scanf(" %[^\n]",s2);
	int cmp;
	cmp=rec_strcmp(s1,s2);
	if(cmp>0)
		printf("s1 is bigger\n");
	else if(cmp==0)
		printf("Both strings are equal\n");
	else
		printf("s1 is less than s2\n");
}
int rec_strcmp(char *s1,char *s2)
{
	static int i;
	if(s1[i]==s2[i] && s1[i+1]!=0 && s2[i+1]!=0)
	{
		i++;
		rec_strcmp(s1,s2);
	}
	else if(s1[i+1]==0 && s2[i+1]==0)
		return 0;
	else
		return s1[i]-s2[i];
}
