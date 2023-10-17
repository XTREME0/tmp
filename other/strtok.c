#include "main.h"


/**
 * _strtok - strok
 *@txt: text to split
 *@sep: the char to sep
 * Return: pointer to split part
 */
char *_strtok(char *txt, char *sep)
{
	static char *p;
	static int i;
	int j = 0;
	char *buff;

	if(txt != NULL)
	{
		buff = malloc(strlen(txt));
		p = txt;
		i = 0;
		if (p[0] == sep[0])
			i++;
	}
	while (p[i] != '\0')
	{
		if (p[i] != sep[0])
		{
			buff[j] = p[i];
		} else
		{
			buff[j] = '\0';
			i++;
			return (buff);
		}
		i++;
		j++;
		if (p[i] == '\0')
		{
			buff[j] = '\0';
			return (buff);
		}
	}

	return (NULL);
}
