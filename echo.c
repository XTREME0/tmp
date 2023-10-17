#include "main.h"
/**
 * echo - check if var is present in echo usage
 *
 *@p: pointer to command
 * Return: pointer p
 *
 */
void echo(char *p, int status, char *env)
{
	char tmp[150];

	if (_strcmp(p, "$?") == 0)
	{
		sprintf(tmp, "%d", status);
		_strcpy(p, tmp);
	} else
	{
		if (_strcmp(p, "$$") == 0)
		{
			sprintf(tmp, "%d", getpid());
			_strcpy(p, tmp);
		} else
		{
			if (_strcmp(p, "$PATH") == 0)
				_strcpy(p, env);
		}
	}
}
