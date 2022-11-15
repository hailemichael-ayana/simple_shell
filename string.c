#include "main.h"
/**
 * _strcmpdir - compares strings to find dir.
 *
 * @str1: String parameter 1.
 *
 * @str2: String parameter 2.
 *
 * Return: str1 - str2.
 **/
int _strcmpdir(char *str1, char *str2)
{
	int i = 0;

	for (; (*str2 != '\0' && *str1 != '\0') && *str1 == *str2; str1++)
	{
		if (i == 3)
			break;
		i++;
		str2++;
	}

	return (*str1 - *str2);
}
/**
 * charput - a function that writes characters like putchar
 *
 * @y: the character
 *
 * Return: 1 (success)
 * On error, -1 is returned, and errno is set appropriately.
 */
int charput(char y)
{
	return (write(1, &y, 1));
}

/**
 * place - afunction that does what puts do
 *
 * @str: a pointer
 *
 * Return: Always 0
 */
void place(char *str)
{
	while (*str != '\0')
	{
		charput(*str);
		str++;
	}
}

/**
 * _strlen - a function that gives us string length
 * @str: string.
 * Return: Length of the string.
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}

/**
 * str_concat - a function for concatenating strings.
 * @str1: string.
 * @str2: string2.
 * Return: concatenated string.
 */
char *str_concat(char *str1, char *str2)
{
	char *x;
	int s1Length, s2Length, j, i, e;

	if (str1 == NULL)
		str1 = "";

	if (str2 == NULL)
		str2 = "";

	s1Length = _strlen(str1);

	s2Length = _strlen(str2);

	x = malloc(((s1Length) + (s2Length) + 1) * sizeof(char));

	if (x == NULL)
		return (NULL);

	for (j = 0; j < s1Length; j++)
	{
		x[j] = str1[j];
	}

	for (i = s1Length, e = 0; e <= s2Length; i++, e++)
	{
		x[i] = str2[e];
	}
	return (x);
}
