#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
/**
 * main - fork exec & wait
 *execute "ls -l /tm" in 5 diff child processes by the same father
 * Return: Always 0.
 */
int main(void)
{
	pid_t child_pid;
	int status, i;
	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};

	printf("Before fork\n");
	i = 5;
	while (i--)
	{
		child_pid = fork();
		if (child_pid == 0)
		{
			printf("I'm child numba %d\n", i + 1);
			printf("pid = %u\n", getpid());
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("Error:");
			}
		} else
		{
			wait(&status);
			printf("i'm the father :%u\n", getpid());
		}
	}
	printf("After execve\n");
	return (0);
}
