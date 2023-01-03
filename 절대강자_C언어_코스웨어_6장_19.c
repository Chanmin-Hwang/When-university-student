#include <stdio.h>
#include <stdlib.h>
void my_strcpy(char dst[],char src[]);
int my_strlen(char str[]);
void my_strcat(char dst[],char src[]);
int my_strcmp(char str1[],char str2[]);
int main(void)
{
	char s1[100] = "Real Madrid",s2[] = "Los Blancos";
	printf("%s\n%s\n",s1,s2);
	my_strcpy(s1,s2);
	printf("%s\n",s1);
	printf("%d\n",my_strlen(s1));

	my_strcat(s1,s2);
	printf("%s\n",s1);

	char s5[] = "aaa",s6[] = "bbb";
	printf("%d\n%d\n%d\n",my_strcmp(s5,s6),my_strcmp(s5,s5),my_strcmp(s6,s5));
	return 0;
}
void my_strcpy(char dst[],char src[])
{
	int i=0;
	while (src[i]!='\0')
	{
		dst[i] = src[i];
		i++;
	}
}
int my_strlen(char str[])
{
	int i=0;
	while (str[i] !='\0' )
		i++;
	return i;
}
void my_strcat(char dst[],char src[])
{
	int i=0,k=0;
	char t[100];
	while (dst[i] != '\0')
	{
		t[i] = dst[i];
		i++;
	}

	while (src[k] != '\0')
	{
		t[i] = src[k];
		i++;
		k++;
	}
	int r = 0;
	while (t[r] != '\0')
	{
		dst[r] = t[r];
		r++;
	}
}
int my_strcmp(char str1[],char str2[])
{
	int i=0;
	while ((str1[i] != '\0') || (str2[i] != '\0'))
	{
		if (str1[i] < str2[i])
			return -1;
		else if (str1[i] > str2[i])
			return 1;
		i++;
	}
	return 0;
}
