#include<stdio.h>

void toLower(char* ptr);

int main()
{
	char str[10];
	scanf("%[^\n]s", str);
	toLower(str);

}

void toLower(char* ptr)
{
	while(*ptr)
	{
		if(*ptr >= 65 && *ptr <= 90)
			printf("%c", *ptr+32);
		else
			printf("%c", *ptr);
		ptr++;
	}
	printf("\n");
}
