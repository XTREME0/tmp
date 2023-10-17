#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - Print ARG
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	char *line;
	size_t len;
	ssize_t rd;

	printf("$ ");
	while ((rd = getline(&line, &len, stdin)) != -1)
	{
		printf("%s", line);
		len = 0;
		printf("$ ");
	}
	printf("\n");
	free(line);
	return (0);
}
