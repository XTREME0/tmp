#include "main.h"
/**
 * _strcmp - basically strcmp
 *
 *@s1: is the first string
 *@s2: is the second string
 * Return: the diff in ascii
 *
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return ((int)s1[i] - (int)s2[i]);
		}
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
	{
		return (0);
	}
	return ((int)s1[i] - (int)s2[i]);
}
