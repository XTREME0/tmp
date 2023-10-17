#include "main.h"

/**
 * main - Print ARG
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	char *tok;
	char **ptr;
	int i = 0;
	char txt[] = " hey split me by hh";
	char t[] = " another tst just to check";
	char sep[] = " ";

	ptr = malloc(sizeof(char **) + strlen(txt));
	tok = strtok(txt, sep);
	while (tok != NULL)
	{
		ptr[i] = strdup(tok);
		i++;
		tok = strtok(NULL, sep);
	}
	ptr[i] = NULL;

	for (i = 0; ptr[i] != NULL; i++)
	{
		printf("%s\n", ptr[i]);
	}


	free(ptr);
	i = 0;
	ptr = malloc(sizeof(char **) + strlen(t));
	tok = _strtok(t, sep);
	while (tok != NULL)
	{
		ptr[i] = strdup(tok);
		i++;
		tok = _strtok(NULL, sep);
	}
	ptr[i] = NULL;

	for (i = 0; ptr[i] != NULL; i++)
	{
		printf("%s\n", ptr[i]);
	}
return (0);
}
