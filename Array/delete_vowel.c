#include<stdio.h>
#include<string.h>
int check_vowel(char c);
void delete_vowel(char str[50]);
int main()
{
	char str[50];
	printf("enter a string\n");
	gets(str);
	delete_vowel(str);
	return 0;
}
void delete_vowel(char str[50])
{
	char t[50];
	int l,i,j=0;
	l=strlen(str);
	for(i=0;str[i];i++)
	{
		if(check_vowel(str[i])==0)
		{
			t[j]=str[i];
			j++;
		}
	}
	t[j]='\0';
	printf("STRING AFTER DELETING ALL THE VOWELS IS:\n");
	puts(t);
}
int check_vowel(char ch)
{
	if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
