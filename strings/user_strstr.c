#include<stdio.h>
char * my_strstr(char *,char *);
void main()
{
	char s1[50],s2[30];
	printf("Enter a string:");
	scanf("%[^\n]",s1);
	printf("Enter searching str:");
	scanf(" %[^\n]",s2);
	if(my_strstr(s1,s2))
		printf("%s is present\n",s2);
	else
		printf("%s is not present\n",s2);
}
char * my_strstr(char *s1,char *s2)
{
	int i,j,k;
	for(i=0;s1[i];i++)
	{
		for(j=0,k=i;s2[j];j++,k++)
			if(s1[k]!=s2[j])
				break;
		if(s2[j]==0)
			return &s1[i];
	}
	return 0;
}
