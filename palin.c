#include<stdio.h>
#include<string.h>

int checkPalin(char str[], int, int);
int main()
{
	char str[50];
	scanf("%[^\n]s", str);
	int len = strlen(str);

	if (checkPalin(str, 0, len-1))
		printf("Palindrome");
	else
		printf("Not Palindrome");
	return 0;
}

int checkPalin(char str[], int begin, int end)
{
	while(begin < end)
	{
		if (str[begin++] != str[end--])
		{
			return 0;
		}
	}
	return 1;	
}
