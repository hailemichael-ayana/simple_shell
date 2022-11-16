#include "main.h"

/**
 *trackInteractive- it keeps track is interactive mode
 *
 *@m: the signal number
 *
 *Return: nothing
 */

void trackInteractive(int m)
{
	(void)m;
	write(STDERR_FILENO, "\n", 1);
	write(STDERR_FILENO, "$ ", 2);
}
