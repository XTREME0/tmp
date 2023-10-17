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
int main(int ac, char **av)
{
	unsigned int i;
	struct stat st;
	char *path;
	char **p;
	char check[100];

	p = malloc(sizeof(char **));
	path = getenv("PATH");
	p = split(path, ":");
	if (ac < 2)
	{
		printf("Usage: %s path_to_file ...\n", av[0]);
		return (1);
	}
	i = 0;
	while (p[i])
	{
		strcpy(check, p[i]);
		strcat(check, "/");
		strcat(check, av[1]);
		printf("%s :", check);
		if (stat(check, &st) == 0)
		{
			printf(" FOUND\n");
		}
		else
		{
			printf(" NOT FOUND\n");
		}
		i++;
	}
	return (0);
}
