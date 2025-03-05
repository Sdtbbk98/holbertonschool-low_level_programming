#include "main.h"
/**
* _strstr - function that locate substrings
* @haystack: char*, buffer
* @needle: char*, substring
* Return: char*, located substring or NULL if not findgi
*/

char *_strstr(char *haystack, char *needle)
{
	char *start_haystack = haystack;
	
	/*checking every character in haystack */
	while (*haystack != '\0')
	{
		char *pt_haystack = haystack;
		char *pt_needle = needle;

		/*checking for match btw haystack and needle*/
		while (*pt_haystack == *pt_needle && *pt_needle != '\0')
		{
			pt_haystack++;
			pt_needle++;
		}
		/*by reaching the end of needle, if we found a match*/
		if (*pt_needle == '\0')
		{
			return (start_haystack);
		}
		haystack++;
		/*adding the next character in the haystack*/
		start_haystack++;
	}
	return (0);
}

