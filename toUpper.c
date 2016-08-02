#include<stdio.h>

void toLower(char*);
int main()
{
	char str[50];
	scanf("%[^\n]s", str);
	toLower(str);
	return 0;
}

void toLower(char* ptr)
{
	while(*ptr)
	{
		if (*ptr >= 97 && *ptr <= 122)
			printf("%c", *ptr - 32);
		else
			printf("%c", *ptr);
		ptr++;
	}
}
