#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <time.h>
#include <stdbool.h>

extern char **environ;
extern __sighandler_t signal(int __sig, __sighandler_t __handler);

int builtinChecker(char **cmd, char *buf);
void inputAfter$(void);
void trackInteractive(int m);
char **tokenCreator(char *line);
char *validPathChecker(char **path, char *command);
char *pathAdder(char *path, char *command);
int builtInExecution(char **command, char *line);
void exitHandler(char **command, char *line);

void envTostdout(void);

int _strcmp(char *s1, char *s2);
int _strlen(char *s);
int _strncmp(char *s1, char *s2, int n);
char *_strdup(char *s);
char *_strchr(char *s, char c);

void usrCmdExecuter(char *cp, char **cmd);
char *findGlobalEnvt(void);

void freeBuffers(char **buf);

struct builtin
{
	char *env;
	char *exit;
} builtin;

struct info
{
	int final_exit;
	int ln_count;
} info;

struct flags
{
	bool interactive;
} flags;

#endif
