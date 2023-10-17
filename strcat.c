#include "main.h"
/**
 * _strcat - basically strcat
 *
 *@dest: is the destination
 *@src: is the source
 * Return: pointer to dest
 *
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int n = strlen(dest);

	while (src[i] != '\0')
	{
		dest[n + i] = src[i];
		i++;
	}
	dest[n + i] = '\0';
	return (dest);
}
