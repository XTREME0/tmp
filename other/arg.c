#include <stdio.h>
#include <unistd.h>

/**
 * main - Print ARG
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int i;

	for (i = 0; av[i] != NULL; i++)
		printf("%s ", av[i]);
	printf("\n");
	return (0);
}
