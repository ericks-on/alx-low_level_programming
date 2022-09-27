#include "main.h"
/**
 * _strstr - finds first occurence of substring
 * @haystack: the string to be searched
 * @needle: the substring to search
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j = 0;
	int n;

	while (needle[i] != '\0')
		j++;
	for (n = 0; haystack[n] != '\0'; n++)
	{
		for(i = 0; i < j; i++)
		{
			if (haystack[n] != needle[i])
				break;
			else
				haystack++;
		}
		if (i == j)
			return(haystack - i);
		else
			haystack--;
	}
	return (NULL);
}

