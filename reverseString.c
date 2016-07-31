//reversing a string using recursion

#include<stdio.h>
#include<string.h>

void reverse(char* str);

int main()
{
	char str[]= "hello world";
	reverse(str);
	return 0;
}

void reverse(char* str)
{
	if(*str)
	{
		reverse(str+1);
		printf("%c", *str);
	}
}
