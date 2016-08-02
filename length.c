#include<stdio.h>

int main()
{
	char str[50];
	scanf("%[^\n]s", str);
	char* ptr = str;
	while(*ptr++);
	printf("Length : %i", ptr-str-1);
	return 0;
}
