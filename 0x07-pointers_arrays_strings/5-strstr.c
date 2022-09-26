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

	while (needle[i] != '\0')
		j++;
	while (*haystack != '\0')
	{
		for(i = 0; i < j; i++)
		{
			if (*(haystack + i) != needle[i])
				break;
		}
		if (!=needle[j])
			return haystack;
		else
			haystack++;
	}
	return (NULL);
}

