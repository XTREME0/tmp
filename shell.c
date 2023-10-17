#include "main.h"

/**
 * main - simple shell
 *
 * Return: Always 0.
 */
int main(int ac, char **av, char **env)
{
	ssize_t rd;
	size_t len = 0;
	char *line = NULL;
	char *cmd;
	char **p;
	int status;
	pid_t child;

	/*printf("%s\n", env[51]);*/
	if (ac > 2)
		exec_file(av[1]);
		/*printf("arg added!\n");*/
	printf("$ ");
	while ((rd = getline(&line, &len, stdin)) != -1)
	{
		if (line[rd - 1] == '\n')
		{
			line[rd - 1] = '\0';
		}
		p = split(line, " ");
		if (_strcmp(p[0], "exit") == 0)
		{
			if (p[1] != NULL)
				exit(atoi(p[1]));
			exit(0);
		}
		if (_strcmp(p[0], "env") == 0)
		{
			penv(env);
			goto portal;
		}
		if (p[1] != NULL)
		{
			echo(p[1], status, env[51]);
		}

		cmd = check_path(p[0]);
		if (cmd == NULL)
		{
			perror("Error");
			goto portal;
		}
		child = fork();
		if (child == 0)
		{
			if (execve(cmd, &p[0], env) == -1)
			{
				perror("Error");
				exit(-1);
			}
		} else
		{
			wait(&status);
		}
portal:
		printf("$ ");
		free(line);
		if (!cmd)
			free(cmd);
		line = NULL;
		len = 0;
	}
	printf("\n");
	return (0);
}
