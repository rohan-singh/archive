#include<stdio.h>

int main()
{
	char str[50];
	scanf("%[^\n]s", str);
	int count[256]={0};
	char* ptr = str;
	while(*ptr)
	{
		count[(int)*ptr]++;
		ptr++;
	}
	ptr = str;
	while(*ptr)
	{
		if(*ptr != *(ptr+1))
			printf("%c%i",*ptr, count[(int)*ptr]);
		ptr++;
	}
	return 0;
}

http://www.geeksforgeeks.org/run-length-encoding/
