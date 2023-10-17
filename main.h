#ifndef HEADER
#define HEADER
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
char **split(char *txt, char *sep);
char *check_path(char *cmd);
void penv(char **env);
char *_strtok(char *txt, char *sep);
void echo(char *p, int status, char *env);
#endif
