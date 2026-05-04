#include<stdio.h>
void rev_spec_word(char *,char *);
void main()
{
	char s1[50],s2[30];
	printf("Enter a string:");
	scanf("%[^\n]",s1);
	printf("Enter reversing word:");
	scanf(" %[^\n]",s2);
	rev_spec_word(s1,s2);
	printf("After reversing string: %s\n",s1);
}
void rev_spec_word(char *s1,char *s2)
{
	int i,j,k;
	for(i=0;s1[i];i++)
	{
		for(j=0,k=i;s2[j];j++,k++)
			if(s1[k]!=s2[j])
				break;
		if(s2[j]==0 && (s1[k]==32 || s1[k]==0 ))
			for(k--,j=0;s2[j];j++,k--)
				s1[k]=s2[j];
	}
}
