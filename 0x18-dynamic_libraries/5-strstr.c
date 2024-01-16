#include "main.h"
/**
 * _strstr - finds the first occurrence of the substring
 * @haystack: entire string
 * @needle: is asubstring
 * Return: it reutns a pointer to the beginning of located substring or
 * NULL if it is not found..
 */
char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pneedle = needle;

		while (*bhaystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
			return (bhaystack);
		haystack = bhaystack + 1;
	}
	return (0);
}
