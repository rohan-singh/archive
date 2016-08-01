#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	scanf("%[^\n]s", str);
	int count[256] = {0};
	int len = strlen(str);
	int i;
	for (i  = 0; i < len; i++)
	{
		count[(int)str[i]]++;
		
		if (count[(int)str[i]] == 1)
		  printf("%c", str[i]);

	}
	return 0;
}

# http://www.geeksforgeeks.org/remove-all-duplicates-from-the-input-string/
