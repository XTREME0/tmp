#include "main.h"
/**
 * split - SPLIT STRING 
 *@txt: string to split
 * Return: pointer to words.
 */
char **split(char *txt, char *sep)
{
	char *tok;
	char **ptr;
	int i = 0;

	ptr = malloc(sizeof(char **) * strlen(txt));
	tok = strtok(txt, sep);
	while (tok != NULL)
	{
		if (tok[0] == '#')
			break;
		ptr[i] = tok;
		i++;
		tok = strtok(NULL, sep);
	}
	ptr[i] = NULL;
	return (ptr);
}
