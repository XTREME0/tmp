#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - stat example
 *
 * Return: Always 0.
 */
char *check_path(char *cmd)
{
	unsigned int i;
	struct stat st;
	char *path;
	static char **p;
	char *check;

	if (!p)
	{
		p = malloc(sizeof(char **));
		path = getenv("PATH");
		p = split(path, ":");
	}
	i = 0;
	if (stat(cmd, &st) == 0)
		return (cmd);
	while (p[i] != NULL)
	{
		check = malloc(strlen(p[i]) + strlen(cmd) + 1);
		_strcpy(check, p[i]);
		_strcat(check, "/");
		_strcat(check, cmd);
		if (stat(check, &st) == 0)
		{
			/* found*/
			/*printf("found: %s\n", check);*/
			return (check);
		}
		free(check);
		i++;
	}
	return (NULL);
}
