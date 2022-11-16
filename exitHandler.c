#include "shell.h"

/**
* exitHandler - handles the exit command
*
* @command: tokenized command
*
* @line: input read from stdin
*
* Return: no return
*/
void exitHandler(char **command, char *line)
{
	free(line);
	free_buffers(command);
	exit(0);
}
