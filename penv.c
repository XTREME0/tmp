#include <stdio.h>

/**
 * penv - prints the environment
 *@env: the envirement var
 * Return: Nothing
 */
void penv(char **env)
{
	unsigned int i;

	i = 0;
	while (env[i] != NULL)
	{
		printf("%s\n", env[i]);
		i++;
	}
}
