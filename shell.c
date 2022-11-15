#include "main.h"

/**
 * main - func with infinite loop
 * @ac: int
 * @av: pointer
 * Return: Always 0.
 **/
int main(int ac, char **av)
{
	(void)av;
	(void)ac;

	signal(SIGINT, controlC);
	prompt();
	return (0);
}
